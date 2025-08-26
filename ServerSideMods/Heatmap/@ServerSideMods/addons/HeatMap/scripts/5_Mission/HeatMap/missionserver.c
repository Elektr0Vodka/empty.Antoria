#ifdef SERVER
modded class MissionServer
{
    static const string HEATMAP_PROFILE_FOLDER = "$profile:Heatmap";
    private string m_CurrentFileName;
    private bool m_SaveEnabled = true; // stop timer manually

    override void OnInit()
    {
        super.OnInit();

        if (!FileExist(HEATMAP_PROFILE_FOLDER))
        {
            MakeDirectory(HEATMAP_PROFILE_FOLDER);
        }

        int year, month, day, hour, minute, second;
        GetGame().GetWorld().GetDate(year, month, day, hour, minute);
        second = GetGame().GetTime() % 60;

        m_CurrentFileName = HEATMAP_PROFILE_FOLDER + "/" + year + "_" + month + "_" + day + "_" + hour + "_" + minute + "_" + second + "_Heatmap.ndjson";

        // Repeating 30s timer
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(AppendHeatmapTimer, 30000, true);
    }

    override void OnMissionFinish()
    {
        super.OnMissionFinish();

        // Stop timer
        m_SaveEnabled = false;

        // Save one last time
        AppendHeatmap();
    }

    void AppendHeatmapTimer()
    {
        if (m_SaveEnabled)
        {
            AppendHeatmap();
        }
    }

    void AppendHeatmap()
    {
        if (m_CurrentFileName != "")
        {
            array<ref HeatmapPoint> newPoints = StoragemapData.GetNewPoints();
            if (newPoints.Count() == 0) return;

            FileHandle file = OpenFile(m_CurrentFileName, FileMode.APPEND);
            if (file)
            {
                foreach (HeatmapPoint point : newPoints)
                {
                    string jsonLine = JsonFileLoader<HeatmapPoint>.JsonSaveToString(point);
                    FPrintln(file, jsonLine);
                }
                CloseFile(file);
            }
        }
    }
}
#endif
