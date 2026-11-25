# LacikaWiFi

LacikaWiFi is the proposed Wi-Fi research subsystem for LacikaProject.

## Current status

**Research scaffold only — no functional Wi-Fi driver exists yet.**

This directory establishes project boundaries, documentation and a place for future, independently developed code. It does not initialize a radio, load firmware, scan for networks, authenticate, or transmit data.

## Goals

- Identify the exact wireless hardware used by each Moto G60 variant from reliable evidence.
- Document the hardware/software interface at a high level.
- Investigate compatible, lawfully usable firmware and software components.
- Design a maintainable C codebase with clear separation between generic logic and device-specific support.
- Define repeatable tests and evidence requirements before claiming support.

## Important hardware uncertainty

A third-party schematic indexed online appears to identify a Qualcomm WCN3980 component for a Hanoi board. This is an unverified research lead, not a confirmed identification for every Moto G60 variant. Motorola's regulatory declaration confirms WLAN capability and supported standards but does not name the wireless chipset.

Do not label WCN3980 as confirmed until corroborated by reliable device-specific documentation.

## Directory guide

- `include/`: public interfaces and shared types.
- `core/`: platform-independent code.
- `device/hanoip/`: Moto G60 research notes; no hardware-specific implementation yet.
- `tests/`: test plans and future host-side tests.

## Development principles

- Keep hardware-specific details out of generic code.
- Do not invent register maps, firmware names, bus details or device identifiers.
- Do not copy HakiOS implementation files. Learn from public architecture and write original code.
- Do not include proprietary firmware or undocumented blobs.
- Mark code as experimental until it has repeatable test evidence.

## Status vocabulary

- **PLANNED** — not implemented.
- **RESEARCH** — evidence gathering.
- **IN_PROGRESS** — implementation underway.
- **EXPERIMENTAL** — tested in a limited environment.
- **VERIFIED** — supported by repeatable test evidence.
- **UNSUPPORTED** — known not to work.

See [STATUS.md](STATUS.md) for the current status.
