# Project Name: SDL Audio Test

## Overview
This project demonstrates the use of SDL2 to load and play an audio file (WAV format). The project uses CMake for build configuration and is designed for cross-platform compatibility.

## Prerequisites
To work on this project, ensure the following software and dependencies are installed on your system:

### Required Software:
- **CMake** (3.15 or later)
- **SDL2** (Development libraries)
- **A C Compiler** (e.g., GCC, Clang, or MSVC)

### Optional Extensions:
If required for advanced features:
- **SDL2_mixer** (for additional audio file formats)
- **SDL2_image** (for image handling, if needed)

### Platform-Specific Installation Instructions

#### **Linux (Ubuntu/Debian):**
1. Update your package manager:
   ```bash
   sudo apt update
   ```
2. Install CMake and SDL2 development libraries:
   ```bash
   sudo apt install -y cmake libsdl2-dev
   ```
3. (Optional) Install SDL2 extensions:
   ```bash
   sudo apt install -y libsdl2-mixer-dev libsdl2-image-dev
   ```

#### **Windows:**
1. Install CMake from the [official website](https://cmake.org/download/).
2. Download SDL2 development libraries from [SDL.org](https://libsdl.org/download-2.0.php).
3. Extract the downloaded SDL2 files and configure your system's PATH or project settings to include the libraries and headers.

#### **macOS:**
1. Install Homebrew (if not already installed):
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
2. Install CMake and SDL2 using Homebrew:
   ```bash
   brew install cmake sdl2
   ```

---

## Getting Started

### Clone the Repository
Clone the repository to your local machine:
```bash
git clone https://github.com/yourusername/yourproject.git
cd yourproject
```

### Build the Project
1. Create a build directory:
   ```bash
   cmake -B build
   ```
2. Compile the project:
   ```bash
   cmake --build build
   ```

### Run the Program
After building the project, run the executable:
```bash
./build/sdl_audio_test
```

---

## Project Structure
```
project-root/
├── assets/              # Directory for audio and other resource files
│   └── kof.wav          # Example audio file
├── main.c              # Source code
├── CMakeLists.txt      # CMake configuration file
├── config.h.in         # Template for configuration header file
├── build/              # Generated build files (ignored in Git)
└── README.md           # This file
```

---

## Notes for Collaborators

### Setting Up Dependencies
Ensure you have the required dependencies installed before building the project. If working on different platforms, refer to the specific platform instructions above.

### Coding Guidelines
- Use consistent formatting (e.g., 4 spaces for indentation).
- Follow SDL2 conventions for error handling (e.g., `SDL_GetError()`).
- Commit only source files, configuration files, and essential resources. Avoid committing generated files like `build/` or `CMakeCache.txt`.

### Testing Changes
After making changes, rebuild the project and test thoroughly. Ensure the `kof.wav` file exists in the `assets` directory before running the program.

---

## Troubleshooting
### Common Errors:
- **SDL initialization failed**: Verify SDL2 is installed correctly.
- **Loading WAV file failed**: Ensure the file exists in the `assets/` directory and the path is correct.
- **Audio device error**: Check your system's audio setup and permissions.

---

## Future Improvements
- Add support for additional audio formats using SDL2_mixer.
- Implement a more interactive audio playback system (e.g., pause, stop, etc.).
- Create a GUI for managing audio playback.

---

## License
This project is open-source. Feel free to modify and share as needed.

---

## Contributors
- Your Name ([yourusername](https://github.com/yourusername))
- Friend's Name ([friendsusername](https://github.com/friendsusername))

