# LacikaProject architecture research

**Status: research architecture, not an implemented system design.**

This section records the system boundaries and questions that must be answered before an integrated device port can be claimed.

## Research layers

1. **Hardware and firmware** — identify the exact device variant, startup environment, and public platform documentation.
2. **Boot interface** — understand what a candidate kernel expects from firmware and what platform handoff information is available.
3. **Kernel** — study XNU's Mach, BSD, I/O Kit, and architecture-specific boundaries. Do not assume that compiling upstream XNU makes it compatible with an Android phone.
4. **Platform adaptation** — document missing abstractions, platform services, interrupt, timer, memory, and device-description requirements.
5. **Drivers** — research each device independently and track its dependencies.
6. **User space** — distinguish kernel functionality from the services and applications required for a usable system.
7. **Validation** — define tests and evidence for each layer.

## Architecture decision record (ADR)

For significant design choices, create a file named `ADR-NNN-short-title.md` containing:

- Status: proposed / accepted / rejected / superseded.
- Context and problem.
- Options considered.
- Decision and reasons.
- Consequences and unresolved questions.
- References and date.

## Current reality

No integrated XNU-based LacikaProject architecture is implemented or verified on the Moto G60. This directory is a place to reason about requirements before writing platform-specific code.

See also [the overview](../ARCHITECTURE.md) and [device research](../devices/MOTO_G60.md).
