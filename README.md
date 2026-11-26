# LacikaProject

**Independent Darwin/XNU research for Android-device architecture.**

LacikaProject explores the technical questions involved in studying and adapting Darwin/XNU-related components in the context of Android hardware. The initial device research target is the Motorola Moto G60 (`hanoip`).

> [!WARNING]
> This repository is a research project. There is no confirmed LacikaProject boot on the Moto G60, no public bootable release, and no verified complete device port. A Darwin-based project is not the same thing as a complete iOS installation.

## Current project status

| Area | Current status |
|---|---|
| Moto G60 (`hanoip`) | Experimental research target |
| Darwin/XNU adaptation | Research and architecture planning |
| XNU integration | Not implemented or verified |
| Device boot | Not confirmed |
| Public bootable release | None |
| LacikaWiFi | Research scaffold; no functional Wi-Fi driver |
| QEMU work | Temporarily paused |

A device name, folder, configuration example, mock test, or successful host-side compile must not be presented as proof of a working phone port.

## Repository map

- `docs/` — architecture, roadmap, compatibility, development and project documentation.
- `devices/motorola/moto-g60-hanoip/` — device-specific research notes.
- `darwin/` — Darwin-related research and draft configuration examples.
- `xnu/` — notes about the XNU kernel and upstream source references.
- `drivers/wifi/` — LacikaWiFi research scaffold and host-side interface tests.
- `research/` — broader hardware, kernel and compatibility notes.
- `tests/` — host-side test documentation and future non-device test coverage.
- `assets/` — non-proprietary project assets.
- `source.html` — current source-code information page.

## Important distinction: Darwin and iOS

Darwin/XNU is an important open-source foundation used by Apple operating systems. It is not the complete iOS distribution. iOS also contains proprietary components, services, frameworks and device-specific integrations. LacikaProject does not provide or claim those components.

Apple-supplied firmware or system inputs must not be committed to this repository. Any future build design must keep user-supplied local inputs separate from project source and must respect the applicable licences and terms.

## Getting started

1. Read [Project overview](docs/PROJECT.md).
2. Review [Architecture](docs/ARCHITECTURE.md) and [Development notes](docs/DEVELOPMENT.md).
3. Check the [device research status](docs/DEVICE_SUPPORT.md).
4. Read [Contributing](CONTRIBUTING.md) before proposing changes.

The draft files under `darwin/config/` document possible version-specific input variables only. They are not working build configurations and are not consumed by a build system yet.

## Research integrity

Label statements as **planned**, **hypothesis**, **experimental**, or **verified**. A result is verified only when its scope, environment, evidence and reproduction notes are recorded. Never invent hardware identifiers, firmware requirements, driver interfaces or test results.

## Independence and licensing

LacikaProject is independent and is not affiliated with Apple, Motorola or other trademark owners. No project-wide licence has been selected yet. Until one is added, do not assume that repository content may be reused or redistributed. Check third-party licences separately.
