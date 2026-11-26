# Architecture overview

**Status: planning document.** This describes intended research boundaries, not an implemented system architecture.

## Conceptual layers

1. **Device research** — record the exact handset variant, public hardware information and known uncertainties.
2. **Darwin/XNU study** — understand the kernel and operating-system interfaces relevant to the research.
3. **Platform adaptation** — investigate what would be required to bridge a Darwin-based environment to a different device platform. No complete adaptation is implemented.
4. **Drivers and services** — research hardware-specific interfaces independently. LacikaWiFi is currently a scaffold, not a working driver.
5. **User space** — study the distinction between open-source components and proprietary operating-system components.
6. **Validation** — keep host-side tests separate from any future physical-device validation.

## Important boundaries

- Darwin/XNU is not equivalent to a complete iOS distribution.
- A configuration file is not proof of compatibility.
- A kernel source tree is not a device port.
- A successful host-side test does not establish hardware functionality.
- HakiOS is a public technical reference for studying design choices; LacikaProject must maintain its own original implementation and evidence.

## Evidence required for progress claims

For every feature, record its scope, exact source revision, test environment, expected result, observed result and limitations. Use the status terms in [DEVICE_SUPPORT.md](DEVICE_SUPPORT.md).
