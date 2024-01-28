# Managing mods

> Learn how to manage your mods using Lampray.

## Prerequisites

Before you can manage your mods using Lampray, you'll need to complete one of the following:

- [Download the latest release](../README.md#quick-start)
- [Build from source](./building-from-source.md).

## Step 1: Set your game paths

You'll need to set the path to your Steam library and game data in Lampray, so your mods are added to the right directories.

At the top of the window, select **Lampray** > **Steam Directory**, then follow the on-screen instructions to set the path to your Steam game's root directory and `AppData` directory.

For Steam Deck you need either to connect a keyboard or install **CoreKeyboard** in desktop mode via Discover app (it can be found in the bottom left part of the screen, it has a blue bag icon). To set the path to the game you need to click `Lampray - Baldur's Gate 3 - Default` in the top left corner with your right trackpad and choose `Game Configuration`.  

This is where you need to use CoreKeyboard. Press Ctrl + H to see hidden folders and files. Current paths for Baldur's Gate are:
` /home/deck/.steam/steamapps/common/Baldurs Gate 3`
and
`/home/deck/.steam/steamapps/compdata/1086940/pfx/drive_c/users/steamuser/AppData/Local/Larian Studios/Baldur’s Gate 3`.

## Step 2: Manage your mods

You'll need to complete the following steps anytime you add or remove mods using Lampray:

### Adding mods

> **Note:** At this time, mods using `.rar` files are not supported.

1. Download your mods from a mod repository, such as Nexus Mods.
2. At the top corner, choose the game you'd like to mod.
3. Drag and drop the `.zip` packages for each mod into Lampray.
4. Enable each mod, choose their mod type, then set their load order. For more information about each mod type, see [Mod types](./mod-types/supported-games.md). 
5. Select **Deploy**.
6. When Lampray is finished deploying your mods, exit Lampray, then launch your game.

### Removing mods

1. At the top corner, choose the game you'd like to remove a mod from.
2. For each mod you'd like to remove, select **Disable**, then **Remove Mod**.
3. When you're finished, select **Deploy**.
