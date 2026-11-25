# LacikaWiFi tests

**Current status: test plan only. No hardware tests have been run.**

## Initial host-side checks

- Compile the platform-independent status core with a standard C compiler.
- Check that each status value maps to the expected text.
- Check that unknown enum values return the documented fallback.
- Run static analysis and compiler warnings.
- Keep host-side tests separate from any future hardware integration tests.

## Future integration evidence

Before claiming Wi-Fi support, testing must separately establish:

1. Hardware identity for the exact device variant.
2. Successful initialization in the intended environment.
3. Wireless interface visibility.
4. Network discovery.
5. A successful connection to a test network.
6. Stable data transfer and recovery after disconnect.

A code build, UI indicator or simulated test is not evidence of working hardware Wi-Fi.
