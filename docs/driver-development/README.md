# Driver development research

This directory defines how driver work should be investigated and documented. It does not claim that LacikaProject has working hardware drivers.

## One subsystem per record

For each driver, document:

- Hardware function and exact identifier, with source.
- Relevant public specifications and upstream references.
- The operating-system interface it would need to implement.
- Existing upstream driver candidates and their licenses.
- Required buses, clocks, power domains, firmware interfaces, and dependencies.
- Code currently present and what it actually does.
- Tests, test environment, results, and limitations.

## Suggested driver record

`docs/driver-development/<subsystem>.md`

Sections: Overview, Hardware identification, Interface research, Dependencies, Implementation status, Test plan, Evidence, Known limitations, References.

## Status vocabulary

- **Unresearched** — no investigation recorded.
- **Research** — gathering specifications and studying interfaces.
- **Scaffold** — structure or placeholder code exists.
- **Prototype** — limited behavior implemented; scope must be stated.
- **Host-tested** — isolated logic tested on a host only.
- **Device-tested** — a stated behavior tested on a named device.
- **Verified** — repeatable evidence supports the exact claim.

## Existing work

[LacikaWiFi status](../../drivers/wifi/STATUS.md) remains a research scaffold, not a functional wireless driver. Do not infer device support from its directory structure.
