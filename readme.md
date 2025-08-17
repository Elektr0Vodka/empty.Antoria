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
```

🚀 *Deploy Antoria and enjoy a fresh DayZ experience!*
