# Cross-Platform C++ System Information

A modular C++ application built to explore **CMake environment scoping, target-based CMake, and cross-platform build configuration**.

The project collects system information using CMake's built-in variables and `cmake_host_system_information()` rather than relying on platform-specific shell commands.

## What This Project Demonstrates

* Cross-platform CMake configuration
* `UNIX` / `WIN32` platform detection
* Platform-specific source selection
* Common platform code with Unix/Windows-specific implementations
* CMake `CMAKE_SYSTEM_*` variables
* Host vs. target system concepts
* CPU and memory information through CMake
* Architecture detection using `CMAKE_SIZEOF_VOID_P`
* Endianness detection using `CMAKE_CXX_BYTE_ORDER`
* CMake target-based configuration
* `PUBLIC` vs. `PRIVATE` target properties
* Static libraries and modular project structure
* Passing CMake configuration information to C++ using compile definitions

## Project Structure

```text
SystemInfo/
├── CMakeLists.txt
│
├── include/
│   └── system_info.h
│
├── src/
│   ├── main.cpp
│   └── system_info.cpp
│
├── cpu/
│   ├── CMakeLists.txt
│   ├── include/
│   │   └── cpu.h
│   └── src/
│       └── cpu.cpp
│
├── memory/
│   ├── CMakeLists.txt
│   ├── include/
│   │   └── memory.h
│   └── src/
│       └── memory.cpp
│
├── endian/
│   ├── CMakeLists.txt
│   ├── include/
│   │   └── endian.h
│   └── src/
│       └── endian.cpp
│
└── platform/
    ├── CMakeLists.txt
    │
    ├── include/
    │   └── platform.h
    │
    ├── src/
    │   └── platform.cpp
    │
    ├── unix/
    │   ├── include/
    │   │   └── unix.h
    │   └── src/
    │       └── unix.cpp
    │
    └── windows/
        ├── include/
        │   └── windows.h
        └── src/
            └── windows.cpp
```

### Platform Module

The `platform` module contains both **common platform functionality** and platform-specific implementations.

```text
platform/
│
├── src/platform.cpp
│       │
│       └── Common platform information
│
├── unix/
│   ├── include/unix.h
│   └── src/unix.cpp
│       │
│       └── Unix-specific implementation
│
└── windows/
    ├── include/windows.h
    └── src/windows.cpp
        │
        └── Windows-specific implementation
```

CMake selects the appropriate implementation:

```cmake
if(UNIX)
    target_sources(PLATFORM PRIVATE
        unix/src/unix.cpp
    )
elseif(WIN32)
    target_sources(PLATFORM PRIVATE
        windows/src/windows.cpp
    )
endif()
```

The application uses a common `Platform` interface while CMake determines which platform-specific implementation is compiled.


## CMake Concepts Used

### Platform-specific source selection

CMake selects the appropriate implementation during configuration:

```cmake
if(UNIX)
    target_sources(PLATFORM PRIVATE
        unix/src/unix.cpp
    )
elseif(WIN32)
    target_sources(PLATFORM PRIVATE
        windows/src/windows.cpp
    )
endif()
```

The application uses a common interface while CMake selects the correct implementation for the platform.

### CMake environment information

The project uses variables such as:

```text
CMAKE_SYSTEM_NAME
CMAKE_SYSTEM_VERSION
CMAKE_SYSTEM_PROCESSOR
CMAKE_SIZEOF_VOID_P
CMAKE_CXX_BYTE_ORDER
```

It also uses:

```cmake
cmake_host_system_information()
```

to obtain information such as logical CPU cores, physical CPU cores, processor information, and physical memory.

## Build

From the project root:

```bash
cmake -S . -B build
cmake --build build
```

## Run

On Linux/macOS:

```bash
./build/SYSTEMINFO
```

On Windows:

```powershell
.\build\Debug\SYSTEMINFO.exe
```

The exact executable location can vary depending on the selected CMake generator.

## Example Output

```text
========================================
           SYSTEM INFORMATION
========================================

Platform information:
Target OS        : Linux
Target Processor : x86_64

Unix-specific implementation

CPU information:
Logical Cores    : 16
Physical Cores   : 8

Memory information:
Total Physical   : 32768 MiB

Architecture information:
Pointer Size     : 8 bytes
Architecture     : 64-bit
Byte Order       : LITTLE_ENDIAN
```

Values depend on the machine and build environment.

## Purpose

This project was built as a hands-on exploration of **CMake environment scoping and cross-platform C++ build configuration**, with an emphasis on understanding how CMake can abstract platform differences from application code.

## Technologies

* C++
* CMake
* Static Libraries
* Cross-platform build configuration
* Git / GitHub
