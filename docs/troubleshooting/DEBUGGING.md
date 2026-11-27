# Debugging workflow

A useful bug report makes a problem reproducible without exposing private information.

## First response checklist

1. Identify the exact repository commit and affected file/component.
2. Write down the expected behavior.
3. Write down the observed behavior.
4. Record the host environment or exact device variant.
5. Capture the complete error message and relevant sanitized logs.
6. Separate the first failure from later cascading errors.
7. Try to reproduce with the smallest safe test case.

## Classify the failure

- Documentation or website issue.
- Host toolchain or dependency issue.
- Source compilation issue.
- Runtime issue in an isolated host test.
- Integration issue.
- Device-specific issue.
- Unknown / insufficient evidence.

Do not label a host compiler error as a phone boot failure, or a successful host test as device validation.

## Issue template

**Title:**  
**Commit:**  
**Affected component:**  
**Environment:**  
**Expected result:**  
**Observed result:**  
**Steps to reproduce:**  
**Logs (sanitized):**  
**What has been tried:**  
**Known limitations:**

## Privacy and safety

Remove access tokens, passwords, private keys, account details, personal information, and proprietary firmware content before sharing logs. Avoid risky experiments on a primary phone; early investigation should prefer source review and host-side tests.
