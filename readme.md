# empty.Antoria

**Official mission files for the DayZ Antoria map.**  
This repository contains the core configuration files needed to deploy and run the **Antoria** map missions in DayZ.

---

## 📦 Repository Contents

The repository includes all essential mission files:

- `empty.Antoria` — Main mission folder.
- `areaflags.map`, `cfgAreaFlags.xml` — Area flag definitions.
- `cfgeconomycore.xml` — Economy and loot settings.
- `cfgeventgroups.xml`, `cfgeventspawns.xml` — Event group and spawn logic.
- `cfgplayerspawnpoints.xml` — Player spawn points.
- `cfgspawnabletypes.xml` — Spawnable object definitions.
- `cfgenvironment.xml`, `cfgweather.xml` — Environment & weather configuration.
- `init.c` — Mission initialization logic.
- `mapgroup*.xml` — Map group/cluster definitions.
- Plus other supporting XML/JSON config files.

---

## 📝 Purpose

This mission file set defines the **gameplay logic, environment, and spawns** for Antoria.  
It is designed to be dropped directly into a DayZ server to run the Antoria map.

---

## ⬇️ Download & Installation for Server Hosts

1. **Download the mission files**  
   - From GitHub:  
     Click the green **Code** button > **Download ZIP**.  
     Or clone directly:  
     ```bash
     git clone https://github.com/Elektr0Vodka/empty.Antoria.git
     ```

2. **Copy to your DayZ server**  
   - Place the `empty.Antoria` folder inside your server’s `mpmissions` directory.  
   - Example:  
     ```
     DayZServer/mpmissions/empty.Antoria
     ```

3. **Select the mission on server startup**  
   - In your server startup parameters, set:  
     ```
     -mission=empty.Antoria
     ```

4. **Adjust settings (optional)**  
   - Edit the included XML/JSON files to customize:  
     - **Vanilla Loot & economy** (`cfgeconomycore.xml`,`types.xml`, `cfgspawnabletypes.xml`)  
     - **Antoria custom Loot** (`xml files in empty.Antoria/antoria_ce folder`)  
     - **Events & spawns** (`cfgeventgroups.xml`, `cfgeventspawns.xml`)  
     - **Weather & environment** (`cfgweather.xml`, `cfgenvironment.xml`)  
     - **Player spawns** (`cfgplayerspawnpoints.xml`)  

---

## 🙌 Contributors

- **Vlad** — Original map author  
- **MrCrumpet** — Configuration & mission setup  
- **Elektr0Vodka** — Repository maintainer & mission integration  

---

## ⚖️ License & Attribution

- **License**: _(Not specified)_  
- **Attribution**: Antoria map by **Vlad**, with mission support by **MrCrumpet** and  **Elektr0Vodka**.  

---

## 📬 Contact & Community

- 📢 Join our community on Discord: [https://discord.gg/yPwsWmB9rr](https://discord.gg/yPwsWmB9rr)  
- 💬 Open an issue on [GitHub](https://github.com/Elektr0Vodka/empty.Antoria/issues) for support or bug reports.  
- 🙏 Contributions and improvements are welcome!  

---
---

## ⚙️ Example `serverDZ.cfg`

Below is a sample `serverDZ.cfg` :

```cfg
hostname = "My Antoria Server";             // Server name displayed in server browser
password = "";                           // Empty = no join password
passwordAdmin = "changeme123";              // Admin password – replace with a secure one
maxPlayers = 64;                         // Maximum number of players allowed

verifySignatures = 2;                    // Full signature verification
forceSameBuild = 1;                      // Restrict to same game build

disableVoN = 0;                          // Enable voice
vonCodecQuality = 30;                    // Voice quality (0–30)

disable3rdPerson = 0;                    // Allow 3rd-person view
disableCrosshair = 0;                    // Allow crosshair

serverTime = "2025/8/17/6/00";			// Initial in-game time of the server. "SystemTime" means the local time of the machine.
									      // Another possibility is to set the time to some value in "YYYY/MM/DD/HH/MM" format, e.g "2015/4/8/17/23".
serverTimeAcceleration = 4;              // Day/night cycle: real-time
serverNightTimeAcceleration = 3;        // Speed up night cycle

loginQueueConcurrentPlayers = 5;         // Players processed at once during login
loginQueueMaxPlayers = 500;              // Maximum in queue

instanceId = 1;                          // Unique server instance ID

motd[] = {
    "Welcome to the our Antoria Server!",
    "Join our Discord for support: discord.gg/yPwsWmB9rr"
};
motdInterval = 1800;                       // Message interval in seconds

logFile = "server_console.log";          // Console log file

BattlEye = 1;                            // Enable BattlEye anti-cheat

class Missions {
    class DayZ {
        template = "empty.Antoria";      // Mission to run
    };
}

timeStampFormat = "Short";		// Format for timestamps in the .rpt file (value Full/Short)
logAverageFps = 10;				// Logs the average server FPS (value in seconds), needs to have ''-doLogs'' launch parameter active
logMemory = 1;					// Logs the server memory usage (value in seconds), needs to have the ''-doLogs'' launch parameter active
logPlayers = 1;					// Logs the count of currently connected players (value in seconds), needs to have the ''-doLogs'' launch parameter active
logFile = "server_console.log";	// Saves the server console log to a file in the folder with the other server logs

adminLogPlayerHitsOnly = 0;		// 1 - log player hits only / 0 - log all hits ( animals/infected )
adminLogPlacement = 1;			// 1 - log placement action ( traps, tents )
adminLogBuildActions = 1;		// 1 - log basebuilding actions ( build, dismantle, destroy )
adminLogPlayerList = 1;			// 1 - log periodic player list with position every 5 minutes

simulatedPlayersBatch = 20;		// Set limit of how much players can be simulated per frame (for server performance gain)

multithreadedReplication = 1;	// enables multi-threaded processing of server's replication system
								// number of worker threads is derived by settings of jobsystem in dayzSettings.xml by "maxcores" and "reservedcores" parameters (value 0-1)
speedhackDetection = 1;			// enable speedhack detection, values 1-10 (1 strict, 10 benevolent, can be float)

networkRangeClose = 20;			// network bubble distance for spawn of close objects with items in them (f.i. backpacks), set in meters, default value if not set is 20
networkRangeNear = 150;			// network bubble distance for spawn (despawn +10%) of near inventory items objects, set in meters, default value if not set is 150
networkRangeFar = 1000;			// network bubble distance for spawn (despawn +10%) of far objects (other than inventory items), set in meters, default value if not set is 1000
networkRangeDistantEffect = 4000;		// network bubble distance for spawn of effects (currently only sound effects), set in meters, default value if not set is 4000
networkObjectBatchLogSlow = 5;	//Maximum time a bubble can take to iterate in seconds before it is logged to the console
networkObjectBatchEnforceBandwidthLimits = 1;	//Enables a limiter for object creation based on bandwidth statistics
networkObjectBatchUseEstimatedBandwidth = 0;	//Switch between the method behind finding the bandwidth usage of a connection. If set to 0, it will use the total of the actual data sent since the last server frame, and if set to 1, it will use a crude estimation
networkObjectBatchUseDynamicMaximumBandwidth = 1;	//Determines if the bandwidth limit should be a factor of the maximum bandwidth that can be sent or a hard limit. The maximum bandwidth that can be sent fluctuates depending on demand in the system.
networkObjectBatchBandwidthLimit = 0.8;		//The actual limit, could be a [0,1] value or a [1,inf] value depending on networkObjectBatchUseDynamicMaximumBandwidth. See above
networkObjectBatchCompute = 1000;	//Number of objects in the create/destroy lists that are checked in a single server frame
networkObjectBatchSendCreate = 10;	//Maximum number of objects that can be sent for creation
networkObjectBatchSendDelete = 10;	//Maximum number of objects that can be sent for deletion



defaultVisibility=1375;			// highest terrain render distance on server (if higher than "viewDistance=" in DayZ client profile, clientside parameter applies)
defaultObjectViewDistance=1375;	// highest object render distance on server (if higher than "preferredObjectViewDistance=" in DayZ client profile, clientside parameter applies)
lightingConfig = 2;				// 0 for brighter night, 1 for darker night, 2 for Sakhal-specific lighting - if enableCfgGameplayFile is enabled, this option will be overriden by the WorldsData::lightingConfig value
disablePersonalLight = 1;		// disables personal light for all clients connected to server

disableBaseDamage = 0;			// set to 1 to disable damage/destruction of fence and watchtower
disableContainerDamage = 0;		// set to 1 to disable damage/destruction of tents, barrels, wooden crate and seachest
disableRespawnDialog = 0;		// set to 1 to disable the respawn dialog (new characters will be spawning as random)

pingWarning = 200;				// set to define the ping value from which the initial yellow ping warning is triggered (value in milliseconds)
pingCritical = 250;				// set to define the ping value from which the red ping warning is triggered (value in milliseconds)
MaxPing = 300;					// set to define the ping value from which a player is kicked from the server (value in milliseconds)
serverFpsWarning = 15;			// set to define the server fps value under which the initial server fps warning is triggered (minimum value is 11)

shotValidation = 1;				// 1 enables the validation, 0 disables
clientPort = 2304;              // int value, forces the port the clients connect with
```

🚀 *Deploy Antoria and enjoy a fresh DayZ experience!*
