# Device porting research

**Status: feasibility research only. No Moto G60 port is verified.**

Porting an operating-system kernel to a new device is a broad compatibility project, not simply changing a device name or adding a configuration file.

## Research areas

- Exact model and board revision.
- Publicly documented processor and platform architecture.
- Firmware interfaces and boot environment.
- Memory map and hardware description.
- Interrupt controller, timers, and power-management interfaces.
- Storage and console access needed for diagnostics.
- Required kernel subsystems and driver dependencies.
- User-space services expected by the target platform.
- A validation strategy with clear pass/fail criteria.

## Porting evidence stages

1. **Inventory** — facts are linked to reliable sources and tied to an exact variant.
2. **Feasibility** — required interfaces are compared with available documentation and upstream code.
3. **Prototype** — a narrowly scoped experiment exists and its limitations are recorded.
4. **Integration** — components are connected in a reproducible build.
5. **Validation** — behavior is demonstrated on the exact target with repeatable evidence.

A stage is not complete because a folder, patch, or configuration file exists.

## Device safety and claims

Do not publish instructions that encourage experimenting with unknown firmware images or bypassing device security. Keep early research to source inspection, public documentation, and host-side tests. Any future physical-device procedure must be reviewed, device-specific, and backed by a recovery plan.

## Current target

See [Moto G60 research](../devices/MOTO_G60.md). The target is a research designation only; LacikaProject has not confirmed a successful boot on it.
