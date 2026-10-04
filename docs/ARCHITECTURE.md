# Architecture

- `core`: lifecycle and public native entry points.
- `gl_compat`: reserved boundary for the legacy OpenGL/LWJGL compatibility surface.
- `egl`: Android EGL forwarding/context boundary.
- `gles_backend`: GLES implementation boundary.
- `shader`: conservative GLSL/ESSL preprocessing.
- `texture`: texture-cache primitives.
- `buffer`: reserved buffer abstraction boundary.
- `framebuffer`: FBO validation/fallback boundary.
- `state_cache`: state deduplication primitive.
- `sync`: frame pacing boundary.
- `diagnostics`: capability and logging infrastructure.
- `config`: environment parsing.
- `android`: JNI/plugin-facing glue.
