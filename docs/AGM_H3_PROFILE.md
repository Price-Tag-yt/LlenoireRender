# AGM H3 profile

Target characteristics: Android 11, ARM64, Helio P22 / MT6762-class CPU, PowerVR GE8320-class GPU, 720x1440.

Recommended starting environment:

```text
LLR_PROFILE=BALANCED
LLR_SHADER_CACHE=1
LLR_TEXTURE_CACHE=1
LLR_STATE_CACHE=1
LLR_FRAME_PACING=auto
LLR_DYNAMIC_RESOLUTION=0
LLR_RESOLUTION_SCALE=1.0
LLR_MSAA=0
LLR_LOG_LEVEL=error
```

Priority is stability and frame-time consistency before peak FPS. Do not publish FPS gains until measured on the actual phone.

Benchmark at identical Minecraft settings and scene: average FPS, 1% low, frame-time variance, RAM, CPU, GPU load where available, shader compilation time, world load time and crashes.
