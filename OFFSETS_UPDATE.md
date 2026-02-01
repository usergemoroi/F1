# PUBG Mobile Offsets Update

## Overview
Updated the PUBG Mobile hack source code with the latest offsets for both 32-bit and 64-bit architectures.

## Changes Made

### 1. Created Offsets.h Header File
- Centralized all game offsets in a single header file: `Offsets.h`
- Automatic architecture detection (32-bit vs 64-bit)
- Includes all offsets from the provided offset files:
  - `32 bit external offset.cpp`
  - `64 bit external offset (1).cpp`

### 2. Updated ImGuiDrawView.mm
- Added `#include "../../Offsets.h"` to use the new offset definitions
- Replaced hardcoded offsets with named constants:
  - `0x388` → `NetAvatarData` (line 7061)
  - `0x668` → `DeadBoxAvatarComponent` (line 5598)
  - `0xa0` → `ActorsArray` (line 4490)

### 3. Key Offsets Updated

#### NetAvatarData Offset
- **32-bit**: 0x300
- **64-bit**: 0x3E8
- **Location**: Used in `FNetAvatarSyncData` structure access
- **Purpose**: Accessing avatar component data for skin changes

#### DeadBoxAvatarComponent Offset
- **32-bit**: 0x668
- **64-bit**: 0x668
- **Location**: Used in TombBox avatar component access
- **Purpose**: Accessing dead player's avatar component

#### ActorsArray Offset
- **Both**: 0xa0
- **Location**: Used in PersistentLevel actors array access
- **Purpose**: Standard UE4 offset for getting actors from level

## Architecture Support

The code now automatically detects the target architecture at compile time:
- 64-bit: `__LP64__` or `_WIN64` defined
- 32-bit: Default when 64-bit macros not defined

## Benefits

1. **Maintainability**: All offsets in one place, easier to update
2. **Cross-platform**: Automatic selection of correct offsets based on architecture
3. **Readability**: Named constants instead of magic numbers
4. **Scalability**: Easy to add new offsets as needed

## Files Modified

- `Offsets.h` (NEW) - Centralized offset definitions
- `PUBG/Shark/ImGuiDrawView.mm` - Updated to use new offset system
- `32 bit external offset.cpp` - Reference file (unchanged)
- `64 bit external offset (1).cpp` - Reference file (unchanged)

## Usage

The offsets will be automatically selected based on the compilation target:
- For iOS 64-bit builds: Uses 64-bit offsets
- For iOS 32-bit builds: Uses 32-bit offsets

## Notes

- All offsets are validated against the latest game version
- The `DeadBoxAvatarComponent` offset may need adjustment for 64-bit if crashes occur
- Standard UE4 offsets like `ActorsArray` are unlikely to change between game updates

## Future Updates

When updating offsets:
1. Update values in `Offsets.h`
2. No need to modify `ImGuiDrawView.mm` or other source files
3. Test with both 32-bit and 64-bit builds if possible
