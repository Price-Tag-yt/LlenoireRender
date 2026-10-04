# LlenoireRender 1.12.2

A Zalith Launcher RendererPlugin-v2 project focused on Minecraft Java 1.12.2, Forge 1.12.2 and low-end Android, with ARM64/PowerVR GE8320-class hardware as a primary optimization target.

## Important status

**0.1.0 is a buildable renderer-plugin foundation, not a completed GL4ES-equivalent compatibility renderer.** It contains original native infrastructure for capability detection, configuration, shader preprocessing, state caching, framebuffer validation, EGL forwarding and Android packaging. It does **not** yet implement the full desktop OpenGL/LWJGL 1.12.2 compatibility surface required to replace GL4ES/HolyGL4ES in every Minecraft/mod workload.

That limitation is deliberate. A fake `lib*.so` that claims to be a complete renderer would be a particularly efficient way to waste everyone's afternoon.

## Architecture

Minecraft/LWJGL -> compatibility layer (planned) -> LlenoireRender core -> GLES backend -> Android GPU driver.

Implemented native modules: `core`, `gl_compat` scaffold, `egl`, `gles_backend`, `shader`, `texture`, `buffer` scaffold, `framebuffer`, `state_cache`, `sync`, `diagnostics`, `config`, `android`.

## Target

- Minecraft 1.12.2 only
- Forge 1.12.2 target
- Android 8+ runtime package; Android 11 / AGM H3 is the primary test target
- ARM64 first; ARMv7 and x86_64 are build targets
- No claim of exact FPS improvement without device measurements

## Profiles

`ULTRA_LOW`, `LOW`, `BALANCED`, `QUALITY`, `CUSTOM`

Recommended AGM H3 starting point: `BALANCED`, `LLR_MSAA=0`, shader cache on, state cache on, frame pacing `auto`, dynamic resolution off until measured.

## Build

GitHub Actions is the recommended build path because it supplies a reproducible JDK/SDK/NDK/CMake environment.

For local/Termux builds, see `docs/TERMUX_BUILD.md`.

## Installation

See `docs/INSTALL_ZALITH.md`.

## Logs

Use `LLR_LOG_LEVEL=info` or `debug` only while diagnosing. Normal operation should stay quiet.

## License

Original project code: MIT. See `THIRD_PARTY.md` for architecture/tooling references.
