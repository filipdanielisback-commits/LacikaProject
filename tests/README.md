# Test organization

This directory is for tests that can run independently of a physical phone.

## Current tests

The Wi-Fi status API scaffold and its host-side tests are located in [drivers/wifi/tests](../drivers/wifi/tests/README.md).

## Test categories

- **Unit tests:** isolated project logic with controlled inputs.
- **Static checks:** source formatting, warnings and documentation consistency.
- **Integration tests:** only after interfaces and test environments are defined.
- **Hardware validation:** separate evidence-based reports; never infer this from host tests.

Do not describe mock or host-side tests as proof that a driver works on the Moto G60.
