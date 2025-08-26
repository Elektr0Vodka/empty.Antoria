#ifdef SERVER
modded class PlayerBase
{
    protected float m_StoragemapTime = float.MAX;
    protected ref array<vector> m_WayPoints;

    override void OnSelectPlayer()
    {
        super.OnSelectPlayer();

        if ( GetGame().IsDedicatedServer() )
        {
            m_WayPoints = new array<vector>;

            StoragemapData.CURRENT_HEATMAP.m_WayPoints.Insert( m_WayPoints );
        }
    }

    override void OnScheduledTick( float deltaTime )
    {
        super.OnScheduledTick( deltaTime );

        if( !m_WayPoints || !IsPlayerSelected() || !IsAlive() )
        {
            return;
        }

        m_StoragemapTime += deltaTime;
        if ( ( m_StoragemapTime >= g_Game.HEATMAP_TICK_TIME_VEHICLE && IsInVehicle() ) ||  m_StoragemapTime >= g_Game.HEATMAP_TICK_TIME )
        {
            m_WayPoints.Insert( GetWaypoint() );

            m_StoragemapTime = 0.0;
        }
    }

    override void EEKilled( Object killer )
    {
        super.EEKilled( killer );

        if ( m_WayPoints )
        {
            m_WayPoints.Insert( GetWaypoint() );
            StoragemapData.CURRENT_HEATMAP.m_DeathPoints.Insert( GetWaypoint() );
        }
    }

    vector GetWaypoint()
    {
        vector waypoint = GetPosition();

        waypoint[1] = GetGame().GetTime() / 1000;

        return waypoint;
    }
}
#endif