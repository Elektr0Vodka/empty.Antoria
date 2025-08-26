#ifdef SERVER
class StoragemapData
{
    static ref StoragemapData CURRENT_HEATMAP = new StoragemapData();

    ref array<ref array<vector>> m_WayPoints = new array<ref array<vector>>;
    ref array<vector> m_DeathPoints = new array<vector>;
    ref array<vector> m_StoragePoints = new array<vector>;
    ref array<vector> m_ZombiePoints = new array<vector>;

    private void StoragemapData()
    {}
}
#endif