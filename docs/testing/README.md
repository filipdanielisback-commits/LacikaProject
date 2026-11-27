# Testing and validation

Testing claims must state exactly what was tested. A passing host-side test is not proof of phone compatibility.

## Test categories

1. **Documentation checks** — links, consistency, and status wording.
2. **Static checks** — formatting, compiler diagnostics, and source analysis where tools are available.
3. **Host-side tests** — isolated logic tested on a development machine.
4. **Emulator or virtual-machine tests** — only when a real, reproducible test environment exists.
5. **Physical-device validation** — a separate category requiring exact device identification, test conditions, and evidence.

## Test report template

- Date:
- Repository commit:
- Component:
- Device or host environment:
- Tool and version:
- Test purpose:
- Expected result:
- Observed result:
- Pass / fail / inconclusive:
- Evidence or sanitized log:
- Limitations:

## Current status

No complete LacikaProject device boot or end-to-end system test is confirmed. Record future results narrowly and do not generalize one test to unrelated hardware or features.
