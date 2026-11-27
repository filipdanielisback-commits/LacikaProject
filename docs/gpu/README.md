# GPU research

**Status: investigation planned; no LacikaProject GPU driver or acceleration support is claimed.**

GPU support is a stack of related components. A GPU model name alone does not establish that a graphics stack will work.

## Research layers

1. **Hardware identification** — confirm the exact SoC, GPU block, revision, and memory arrangement from reliable sources for the exact handset variant.
2. **Firmware and initialization** — identify documented firmware dependencies and initialization responsibilities without assuming proprietary components are available.
3. **Kernel interface** — research the relevant memory management, scheduling, synchronization, power, and device interfaces.
4. **Userspace interface** — identify the graphics API and userspace driver expectations.
5. **Display pipeline** — distinguish GPU rendering from display controller, composition, and panel support.
6. **Validation** — define separate tests for device discovery, command submission, rendering, synchronization, and stability.

## Upstream research

Useful public projects to study include the Linux kernel, Mesa, and their published documentation. Their existence does not imply compatibility with XNU or this device. Record the exact upstream project, version, license, interface, and adaptation gap.

## GPU research log template

- Exact device variant:
- SoC/GPU identifier and source:
- Source revision:
- Kernel-side interface:
- Userspace interface:
- Firmware assumptions:
- Display dependencies:
- Existing upstream implementations:
- Experiments and environment:
- Results and limitations:
- Open questions:

## Current status

No GPU driver, accelerated rendering path, or graphics benchmark on the Moto G60 is currently verified by LacikaProject.
