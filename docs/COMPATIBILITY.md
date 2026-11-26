# Compatibility and validation

This document separates research interest from demonstrated compatibility.

## Current matrix

| Component | Target | Status | Evidence |
|---|---|---|---|
| Device research | Moto G60 (`hanoip`) | RESEARCH | Device notes are being assembled |
| Darwin/XNU | Android hardware context | PLANNED | No integrated system verified |
| XNU adaptation | Moto G60 | NOT VERIFIED | No working integration demonstrated |
| Wi-Fi | Moto G60 | RESEARCH | See [LacikaWiFi status](../drivers/wifi/STATUS.md) |
| Phone boot | Moto G60 | NOT CONFIRMED | No successful LacikaProject boot recorded |
| Public bootable release | Moto G60 | NONE | No public bootable release |

## Status meanings

- **PLANNED** — intended work; not implemented.
- **RESEARCH** — evidence gathering or feasibility study.
- **EXPERIMENTAL** — a limited test exists; scope and limitations must be stated.
- **VERIFIED** — repeatable evidence supports the specific feature and exact target.
- **NOT VERIFIED** — evidence is missing or insufficient.
- **NONE** — no release or implementation exists.

## Evidence record template

For a future test, record:

- Date and exact device model / revision.
- Source commit and configuration revision.
- Test environment and tool versions.
- What was tested and what success means.
- Observed output and relevant sanitized logs.
- Whether the result was repeated independently.
- Known limitations and unresolved questions.

Do not publish personal data, credentials, private network details or proprietary firmware.
