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
     - **Loot & economy** (`cfgeconomycore.xml`,`types.xml`, `cfgspawnabletypes.xml`)  
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

- **License**: _(Not specified — consider adding one, e.g., MIT or CC-BY)_  
- **Attribution**: Antoria map by **Vlad**, with mission support by **MrCrumpet** and  **Elektr0Vodka**.  

---

## 📬 Contact & Community

- 📢 Join our community on Discord: [https://discord.gg/yPwsWmB9rr](https://discord.gg/yPwsWmB9rr)  
- 💬 Open an issue on [GitHub](https://github.com/Elektr0Vodka/empty.Antoria/issues) for support or bug reports.  
- 🙏 Contributions and improvements are welcome!  

---

🚀 *Deploy Antoria and enjoy a fresh DayZ experience!*
