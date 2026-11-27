# Building LacikaProject

**Build status: no verified end-to-end LacikaProject build procedure is available yet.**

This page is deliberately not a copy-paste build recipe. The repository contains research notes and experimental scaffolding; it is not currently a complete operating-system source tree.

## Build categories

Keep these separate in reports:

- **Website build/deployment** — the project website; unrelated to building an operating-system image.
- **Host-side utility build** — an individual tool or test compiled on a development computer.
- **Upstream source build** — building a separately obtained upstream project using its own documented process.
- **LacikaProject integration build** — would require a defined source manifest, toolchain, configuration, dependencies, and reproducible output. This has not been established.
- **Device image** — no bootable Moto G60 image is currently available.

## Before documenting a build command

A command belongs here only after it has been run successfully in a named environment. Record:

1. Host OS and version, CPU architecture, and available memory/storage requirements.
2. Compiler, SDK, build-system, and dependency versions.
3. Exact source revision and configuration.
4. Full command sequence and working directory.
5. Expected output and how it is checked.
6. Known failures, limitations, and whether another person reproduced it.

## Build report template

- Date:
- Source commit:
- Host environment:
- Toolchain versions:
- Configuration:
- Commands:
- Result:
- Output artifact and checksum, if applicable:
- Warnings/errors:
- Reproduction status:

Never call a successful compilation a successful phone boot. Do not publish proprietary firmware, secrets, or private signing material.
