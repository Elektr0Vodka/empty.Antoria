#ifdef SERVER
modded class Container_Base : ItemBase
{
    protected float m_StoragemapTime = float.MAX;
    protected ref array<vector> m_WayPoints;

    static ref array<Container_Base> a_Con = { };

    void Container_Base()
    {
        if (!a_Con)
        {
            a_Con = { };
        }

        a_Con.Insert(this);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Save_Container_Base, 300, false);
    }

    void ~Container_Base()
    {
        if (a_Con)
        {
            a_Con.RemoveItem(this);
        }
    }

    vector GetWaypoint()
    {
        vector waypoint = GetPosition();

        waypoint [1] = GetGame().GetTime() / 1000;

        return waypoint;
    }

    void Save_Container_Base()
    {
            StoragemapData.CURRENT_HEATMAP.m_StoragePoints.Insert(GetWaypoint());
    }
}
#endif