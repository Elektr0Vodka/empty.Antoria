class CfgPatches
{
	class HeatMap
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data"};
	};
};
class CfgMods
{
	class HeatMap
	{
		name = "HeatMap";
		dir = "HeatMap";
		credits = "NullWorld, ElektroVodka, Vlad";
		author = "affenb3rt";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HeatMap/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HeatMap/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HeatMap/scripts/5_Mission"};
			};
		};
	};
};
