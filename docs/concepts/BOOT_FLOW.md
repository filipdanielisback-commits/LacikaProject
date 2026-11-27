# Conceptual boot flow

**Status: educational overview only. No LacikaProject boot chain is implemented or verified.**

A modern phone startup involves several platform-specific stages. The names and exact sequence vary by device and firmware.

## High-level stages

1. **Power-on and platform firmware** — the device's existing startup components initialize essential hardware.
2. **Boot policy and verified boot** — platform-specific checks determine which software is permitted to start.
3. **Kernel handoff** — a compatible kernel and its required platform information would need to be prepared and started.
4. **Kernel initialization** — the kernel initializes its internal subsystems and discovers supported hardware.
5. **User space** — system services and user applications start after the kernel provides the required interfaces.

## LacikaProject status

This is a conceptual model for research. LacikaProject has not demonstrated a compatible loader, kernel handoff, XNU startup, or user-space startup on the Moto G60.

## What must be researched

- Exact device variant and platform documentation.
- Firmware and boot-chain boundaries.
- Kernel entry requirements and platform interfaces.
- Device-tree or equivalent hardware-description requirements.
- Driver availability and initialization dependencies.
- A safe, reproducible validation plan.

Do not infer that any stage works merely because it appears in this document.
