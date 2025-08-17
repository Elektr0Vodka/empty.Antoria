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

Below is a sample `serverDZ.cfg` do not forget to change ports, passwords, viewdistance and other settings. Logging everything is on by default in this case.:

```cfg
// ======================================================
// Basic server settings
// ======================================================
hostname = "My Antoria Server";     // Server name displayed in server browser
password = "";                      // Empty = no join password
passwordAdmin = "changeme123";      // Admin password – replace with a secure one
maxPlayers = 64;                    // Maximum number of players allowed
verifySignatures = 2;               // Full signature verification
forceSameBuild = 1;                 // Restrict to same game build

// ======================================================
// Voice / Camera settings
// ======================================================
disableVoN = 0;                     // Enable voice
vonCodecQuality = 30;               // Voice quality (0–30)
disable3rdPerson = 0;               // Allow 3rd-person view
disableCrosshair = 0;               // Allow crosshair

// ======================================================
// Time & date settings
// ======================================================
serverTime = "2025/8/17/6/00";      // Initial in-game time (or use "SystemTime")
serverTimeAcceleration = 4;         // Time acceleration (day)
serverNightTimeAcceleration = 3;    // Time acceleration (night)

// ======================================================
// Queue & instance settings
// ======================================================
loginQueueConcurrentPlayers = 5;    // Players processed at once during login
loginQueueMaxPlayers = 500;         // Maximum in queue
instanceId = 1;                     // Unique server instance ID

// ======================================================
// Messages of the day
// ======================================================
motd[] = {
    "Welcome to our Antoria Server!",
    "Join our Discord for support: discord.gg/yPwsWmB9rr"
};
motdInterval = 1800;                 // Message interval in seconds

// ======================================================
// Logs
// ======================================================
logFile = "server_console.log";      // Console log file
timeStampFormat = "Short";           // Format for .rpt log timestamps (Full/Short)
logAverageFps = 10;                  // Interval (sec) for average server FPS logging
logMemory = 1;                       // Interval (sec) for memory usage logging
logPlayers = 1;                      // Interval (sec) for connected players logging

// ======================================================
// Admin logs
// ======================================================
adminLogPlayerHitsOnly = 0;          // 1 = only log player hits / 0 = log all hits
adminLogPlacement = 1;               // Log placement actions (traps, tents, etc.)
adminLogBuildActions = 1;            // Log basebuilding actions
adminLogPlayerList = 1;              // Periodic player list with position (every 5 min)

// ======================================================
// Performance settings
// ======================================================
simulatedPlayersBatch = 20;          // Limit of players simulated per frame
multithreadedReplication = 1;        // Enables multi-threaded replication
speedhackDetection = 1;              // Enable speedhack detection (1–10)

// ======================================================
// Network bubble / bandwidth
// ======================================================
networkRangeClose = 20;              // Bubble: close objects
networkRangeNear = 150;              // Bubble: near inventory items
networkRangeFar = 1000;              // Bubble: far objects
networkRangeDistantEffect = 4000;    // Bubble: effects (sound, etc.)

networkObjectBatchLogSlow = 5;
networkObjectBatchEnforceBandwidthLimits = 1;
networkObjectBatchUseEstimatedBandwidth = 0;
networkObjectBatchUseDynamicMaximumBandwidth = 1;
networkObjectBatchBandwidthLimit = 0.8;
networkObjectBatchCompute = 1000;
networkObjectBatchSendCreate = 10;
networkObjectBatchSendDelete = 10;

// ======================================================
// Rendering & lighting
// ======================================================
defaultVisibility = 1375;            // Max terrain render distance
defaultObjectViewDistance = 1375;    // Max object render distance
lightingConfig = 2;                  // 0=bright, 1=dark, 2=Sakhal
disablePersonalLight = 1;            // Disable personal light for clients

// ======================================================
// Gameplay toggles
// ======================================================
disableBaseDamage = 0;               // 1 = disable fence/watchtower damage
disableContainerDamage = 0;          // 1 = disable tent/container damage
disableRespawnDialog = 0;            // 1 = disable respawn dialog

// ======================================================
// Connection / ping / FPS safety
// ======================================================
pingWarning = 200;                   // Ping warning threshold (yellow)
pingCritical = 250;                  // Ping warning threshold (red)
MaxPing = 300;                       // Kick players above this ping
serverFpsWarning = 15;               // Warn if server FPS drops below this

shotValidation = 1;                  // Enable shot validation
clientPort = 2304;                   // Client connection port
BattlEye = 1;                        // Enable BattlEye

// ======================================================
// Missions
// ======================================================
class Missions {
    class DayZ {
        template = "empty.Antoria";  // Mission to run
    };
}
```

🚀 *Deploy Antoria and enjoy a fresh DayZ experience!*
