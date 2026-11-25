# LacikaWiFi status

**Overall status: RESEARCH**

| Area | Status | Notes |
|---|---|---|
| Project structure | IN_PROGRESS | Initial documentation scaffold created |
| Moto G60 Wi-Fi chipset identification | RESEARCH | WCN3980 is an unverified schematic lead |
| Hardware interface | PLANNED | Requires reliable device-specific evidence |
| Firmware requirements | PLANNED | No firmware assumptions made |
| Generic C implementation | PLANNED | No radio-control code implemented |
| Darwin networking integration | PLANNED | Requires a defined kernel and user-space interface |
| Host-side tests | PLANNED | Test plan to be written before implementation |
| Moto G60 hardware validation | PLANNED | No validation has been performed |

## Evidence rule

A feature may only be marked **EXPERIMENTAL** or **VERIFIED** when its test environment, steps, result and relevant logs are recorded. A successful build alone does not prove that Wi-Fi works.

## Current limitations

- No working Wi-Fi driver.
- No network scanning or connection support.
- No firmware loader.
- No confirmed Moto G60 wireless chipset identification.
- No Darwin/XNU integration.
