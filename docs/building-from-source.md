
# Building from source

> Learn how to build Lampray from source. When you're finished, you'll be able to [mod your games using Lampray](./managing-mods.md).

## Step 1: Clone the repository

To clone the Lampray repository into your home directory, run the following command:

```
cd ~
git clone git@github.com:CHollingworth/Lampray.git
cd ./Lampray
```

## Step 2: Install dependencies

Lampray requires the following:

| Type        | Name                 |
|-------------|----------------------|
| Build Tool  | C++                  |
| Build Tool  | CMake                |
| Build Tool  | GCC                  |
| Build Tool  | ninja-build          |
| Library     | libcurl4-openssl-dev |
| Library     | pkg-config           |
| Library     | SDL2                 |
| System Tool | 7-Zip                |
| System Tool | Zenity               |

> **Note:** In most cases, Lampray can find your 7-zip installation. However, if it's located in a non-standard location, you'll need to [manually set the path to 7-Zip](./customizing-lampray.md#setting-the-path-to-7-zip).

You can either these dependencies manually or use the included setup script. To use the setup script, run the following command:

```sh
./setup.sh
```

If your setup is successful, you'll see the following output:

```sh
==> 💁 [ASDF] Done ✅
```

## Step 3: Build from source

You can build Lampray by [using the Lampray build script](#build-script-recommended) or by [manually running commands](#manual).

### Build script (recommended)

To build Lampray using the included build script, run the following command:

```sh
~/Lampray/build.sh
```

If your build is successful, you'll see the following output:

```
📦 Build complete
```

Finally, launch Lampray.

```sh
~/Lampray/Build/Lampray
```

### Manual

To generate and configure Lampray's build files manually, run the following command:

```sh
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_MAKE_PROGRAM=ninja -G Ninja -S ./ -B ./Build
```

Open the newly created `Build` directory.

```sh
cd Build
```

Build the Lampray executable.

```sh
ninja
```

Finally, launch Lampray.

```sh
~/Lampray/Build/Lampray
```
