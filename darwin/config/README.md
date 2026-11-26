# Draft Darwin configuration examples

**These files are documentation-oriented examples, not working build configurations.**

The versioned files illustrate how the project may eventually keep Darwin-version-specific input settings separate. They are not copied build scripts, do not perform extraction or decryption, and are not currently read by any LacikaProject build tool.

## Variables shown

- `IOS` — placeholder for a locally supplied input directory. It must remain outside the repository.
- `WALLPAPER` — optional image preference placeholder; no image builder currently consumes it.
- `METAL` — optional capability placeholder; no Metal integration is implemented.

## Before these become functional

A future implementation needs a separately reviewed build design, documented input provenance, version compatibility checks, licence review and tests. Do not infer that a Darwin 26 or Darwin 27 input is compatible with Moto G60 hardware.

Never upload IPSW files or extracted proprietary Apple components to GitHub.
