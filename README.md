<p align="center">
<img src="./program_info/aethermc-header-black.svg?v=2#gh-light-mode-only" alt="AetherMC logo" width="50%"/>
<img src="./program_info/aethermc-header.svg?v=2#gh-dark-mode-only" alt="AetherMC logo" width="50%"/>
</p>

AetherMC is a custom launcher for Minecraft that focuses on predictability, long term stability and simplicity.

This is a **fork** of the MultiMC Launcher (via PolyMC) and not endorsed by MultiMC.
<br>

# Installation

- Downloads for AetherMC can be found on the [Releases page](https://github.com/Gael66666/AetherMC/releases)
- Last build status: <https://github.com/Gael66666/AetherMC/actions>

## Development Builds

There are per-commit development builds available [here](https://github.com/Gael66666/AetherMC/actions). These have debug information in the binaries, so their file sizes are relatively larger.
Portable builds are provided for AppImage on Linux, Windows, and macOS.

# Help & Support

Feel free to create an [issue](https://github.com/Gael66666/AetherMC/issues) if you need help or want to report a bug.

# Development

## Building

To build AetherMC yourself, this project uses CMake and Qt6. See the GitHub Actions workflows in `.github/workflows/` for the exact build steps used on each platform.

## Forking/Redistributing/Custom builds policy

You are free to do what you want with your fork/custom build as long as you follow the terms of the [license](LICENSE) (this is a legal responsibility), and if you made code changes rather than just packaging a custom build, please do the following as a basic courtesy:

- Make it clear that your fork is not AetherMC and is not endorsed by or affiliated with this project.
- Go through [CMakeLists.txt](CMakeLists.txt) and change the API key to your own or set it to an empty string (`""`) to disable it (this way the program will still compile but you won't be able to log into your Minecraft account).

If you have any questions or want any clarification on the above conditions please make an issue and ask.

Be aware that if you build this software without removing the provided Microsoft API key in [CMakeLists.txt](CMakeLists.txt) you are accepting the following terms and conditions:

- [Microsoft Identity Platform Terms of Use](https://docs.microsoft.com/en-us/legal/microsoft-identity-platform/terms-of-use)

If you do not agree with these terms and conditions, then remove the Microsoft API keys from the [CMakeLists.txt](CMakeLists.txt) file by setting it to an empty string (`""`).

All launcher code is available under the GPL-3.0-only license.

The logo and related assets are under the CC BY-SA 4.0 license.
