
# DayZ Heatmap Generator

Based on the index included with [HeatMap](https://steamcommunity.com/sharedfiles/filedetails/?id=2854246756).

A lightweight browser-based tool to generate interactive heatmaps from exported DayZ server/player data. Built with plain HTML, CSS, and JavaScript — no backend required.

Originally, a very basic `index.html` was created by Affenb3rt. This project expands and updates it, bringing additional functionality and improvements.

The mod included is based on Affenb3rt's version with updated functions from NullWorld.

**Note:** This tool should only be run server-side, not client-side.

This `index.html` also works with **NullWorld_Heatmap**.

## Features

- Map support
  - Built-in maps: Antoria, Enoch, Chernarus, Esseker
  - Load custom map images

- Heatmap rendering
  - Player waypoints shown as a heatmap with configurable intensity
  - Deaths, storages, and zombies shown as overlay markers
  - Time slider to filter events chronologically

- User Interface
  - Toggle layers: Waypoints, Deaths, Storages, Zombies
  - Heatmap intensity slider
  - Dark/Light theme toggle
  - Select folder or drag-and-drop JSON data files

- Export
  - Merge current map and overlays into a PNG image

---

## Getting Started

1. Download `index.html`.
2. Open it in a modern browser (Chrome, Edge, Firefox).
3. Drag and drop your exported DayZ JSON files from the heatmap folder onto the page or use the Select Folder button.
4. Adjust layers, intensity, and the time filter.
5. Export the combined heatmap as an image.

---

## JSON File Structure

The tool expects JSON files containing some of the following fields:

- `m_WayPoints`
- `m_DeathPoints`
- `m_StoragePoints`
- `m_ZombiePoints`

Each dataset is optional and will only be loaded if present.

---

## Tech Stack

- HTML5 + Canvas
- CSS3 (light/dark theme)
- JavaScript
- [html2canvas](https://html2canvas.hertzen.com/) for export
- [FileSaver.js](https://github.com/eligrey/FileSaver.js/) for saving PNGs

---

## Development Notes

- All rendering is client-side; no server is required.
- Heatmap colors follow a blue → green → yellow → red gradient based on intensity.
- Deaths, storages, and zombies are displayed as markers, not blended heatmaps.
- To add more maps, extend the `mapImage` and `mapSize` dictionaries in the JavaScript file.

---

## License

MIT License — free to use and modify.


