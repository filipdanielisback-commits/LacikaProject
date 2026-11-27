# Driver research

This section explains how LacikaProject records driver-related research. It does not claim that any driver is ready for use.

## Suggested record for each subsystem

- Component and exact hardware identifier, with source.
- Relevant public specifications or upstream source references.
- Expected operating-system interface.
- Existing upstream driver candidates, if any.
- Dependencies and initialization assumptions.
- What has actually been implemented.
- Tests performed, environment, results, and limitations.
- Open questions and next research steps.

## Current known example

[LacikaWiFi](../../drivers/wifi/README.md) is a research scaffold. It is not a functional Wi-Fi driver and must not be described as providing working wireless networking.

## Driver status labels

- **Research** — collecting specifications and studying interfaces.
- **Scaffold** — code or structure exists, but functionality is incomplete.
- **Host-tested** — a stated test passed outside the target phone; this does not prove device operation.
- **Device-tested** — a specific behavior was tested on a named device and revision.
- **Verified** — repeatable evidence supports the precise claim.

Never promote a driver to a stronger status without recording evidence.
