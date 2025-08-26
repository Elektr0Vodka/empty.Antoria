#ifdef SERVER
modded class MissionServer
{
    static const string HEATMAP_PROFILE_FOLDER = "$profile:Heatmap";

    override void OnInit()
    {
        super.OnInit();

        if (!FileExist(HEATMAP_PROFILE_FOLDER))
        {
            MakeDirectory(HEATMAP_PROFILE_FOLDER);
        }
    }

    override void OnMissionFinish()
    {
        super.OnMissionFinish();

        int year, month, day, hour, minute;
        GetGame().GetWorld().GetDate(year, month, day, hour, minute);

        string file_name = HEATMAP_PROFILE_FOLDER + "/" + year + "_" + month + "_" + day + "_" + hour + "_" + minute + "_Heatmap.json";
        JsonFileLoader<StoragemapData>.JsonSaveFile(file_name, StoragemapData.CURRENT_HEATMAP);
    }

    // void TestingShit()
    // {
    //     string file_name = HEATMAP_PROFILE_FOLDER + "/" +"TEST" + "_Storagemap.json";
    //     JsonFileLoader<StoragemapData>.JsonSaveFile(file_name, StoragemapData.CURRENT_HEATMAP);
    // }
}
#endif
