# LacikaProject test plan

This plan defines how evidence should be collected. It is not a report of tests already passed.

## Test levels

| Level | Purpose | What it proves |
|---|---|---|
| Documentation | Check links, spelling, and status consistency | Documentation quality only |
| Static analysis | Inspect source without running it | Only the checks performed |
| Unit test | Test isolated logic on a host | That logic in the stated host environment |
| Integration test | Test connected components in a defined environment | The tested integration only |
| Device test | Test a named behavior on an exact device | That behavior on that device and revision |
| Release validation | Verify a defined release artifact and its provenance | Only the checks listed in the release report |

## Minimum test record

Every test report should include date, commit, component, host/device model, tool versions, exact test scope, expected result, observed result, pass/fail/inconclusive status, sanitized evidence, and limitations.

## Initial project checks

- [ ] Check that documentation links resolve.
- [ ] Check that status claims agree across README and docs.
- [ ] Identify which source directories contain real code versus scaffolding.
- [ ] Add host-side tests only where testable behavior exists.
- [ ] Record known untested components.
- [ ] Do not report a device test unless it was performed on the named device.

## Release gate

A release must state what is included, what was tested, what is not supported, and whether any image is actually bootable. No bootable LacikaProject release is currently confirmed.
