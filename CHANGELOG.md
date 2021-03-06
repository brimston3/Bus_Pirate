## Changes from 7.0 to 7.1:

### Bus Pirate v3 specific changes:

* The source tree can now be rebuilt for Bus Pirate v3 using MPLAB X.
* PC-AT keyboard mode is available for Bus Pirate v3 once more. (#19)
* PIC mode is available for Bus Pirate v3 once more. (#19)
* Firmware demos have been migrated to MPLAB X.
* Bootloader v4.5 has been migrated to MPLAB X.

### Bus Pirate v4 specific changes:

* Bootloader v1 has been migrated to MPLAB X.
* USB I/O now works when building the firmware using higher optimisation levels, working around a bug in xc16 1.26's code generator. (#11)

### Changes applicable to both hardware versions:

* "pirate-loader" now needs to be built with CMake, to allow building on modern OSX and Windows versions.
* SUMP support is now an optional feature.
* SMPS support is now an optional feature.
* Modules configuration has been centralised into `Firmware/configuration.h`, allowing for more flexibility when creating custom images.
* Assigning a state to the AUX pin via BASIC scripts now works properly.
* Extra bus speeds are now available for SPI mode. (#25)
* Raw 2-wire mode now correctly honours LSB/MSB endianness settings. (#17)
* General refactoring and code cleanups have reduced both memory and code footprint when building without optimisations enabled.
* Firmware code sections do not overlap each other anymore. (#10)

### Other:

* The message generation program has been turned into a Python script, to increase portability.
* Support for Bus Pirate v1A, v2, and v2.5 has been removed. (#6)
* Hardware schematics have been migrated to their own repo at [https://github.com/BusPirate/hardware](https://github.com/BusPirate/hardware) (#14)
* Documentation from Dangerous Prototypes' wiki has been converted into Markdown format and placed in the source repository.
