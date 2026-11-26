# Darwin research

This directory is for LacikaProject's Darwin-related architecture notes and draft configuration planning.

## Scope

- Study public Darwin/XNU architecture and interfaces.
- Document compatibility questions for the Android-device research target.
- Keep project-authored code separate from upstream and third-party material.
- Keep any user-supplied local Apple inputs outside the repository.

## Current status

There is no functioning Darwin image build pipeline in this repository. The files in `config/` are illustrative drafts only; no script currently consumes them.

Darwin/XNU is not the complete iOS operating system. Proprietary Apple components and services are not included or promised by LacikaProject.

## Input handling

Do not commit IPSW files, extracted Apple system files, proprietary firmware, keys or other restricted material. Any future workflow must be reviewed for licence compliance and must operate only on inputs the user is authorized to use.
