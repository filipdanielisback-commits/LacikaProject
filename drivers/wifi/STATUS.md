# LacikaWiFi status

**Overall status: RESEARCH**

| Area | Status | Notes |
|---|---|---|
| Project structure | IN_PROGRESS | Initial source and documentation scaffold created |
| Status API | EXPERIMENTAL | Host-side unit tests are provided; run them before relying on the result |
| Moto G60 Wi-Fi chipset identification | RESEARCH | WCN3980 is a schematic-based research lead, not yet independently corroborated for the exact handset variant |
| Hardware interface | PLANNED | Requires reliable device-specific evidence |
| Firmware requirements | PLANNED | No firmware assumptions made |
| Generic C implementation | PLANNED | No radio-control code implemented |
| Darwin networking integration | PLANNED | Requires a defined kernel and user-space interface |
| Host-side tests | IN_PROGRESS | Status API tests are provided |
| Moto G60 hardware validation | PLANNED | No validation has been performed |

## What VERIFIED must mean

The project must never mark Wi-Fi as VERIFIED because source code compiles, a UI icon appears, or a mock test passes.

A future hardware verification report must identify:

- Exact handset model and hardware revision.
- Evidence for the wireless chipset and host interface.
- Exact LacikaProject source revision and build configuration.
- Test environment and test date.
- Whether the driver initialized the real device.
- Whether a real scan returned results from the surrounding environment.
- Whether association and authentication succeeded on a test network.
- Whether bidirectional data transfer worked.
- Whether disconnect, reconnect and error recovery were tested.
- Logs and known limitations, with private network credentials removed.

Until those checks have been performed on the actual supported hardware, the overall status must remain below VERIFIED.

## Current limitations

- No working Wi-Fi driver.
- No network scanning or connection support.
- No firmware loader.
- No confirmed chipset identification for every Moto G60 variant.
- No Darwin/XNU integration.
- No Moto G60 hardware tests have been performed.

## Safe development boundary

Host-side C tests and documentation can be developed independently. Any future physical-device integration should be planned and reviewed with a qualified adult or experienced hardware developer. Do not experiment with device firmware, boot configuration or partitions as part of these initial tests.
