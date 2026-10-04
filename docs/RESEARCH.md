# Research

The supplied research basis identifies ZalithLauncher/RendererPlugin, RendererPlugin-v2, ZalithLauncher2, HolyGL4ES variants and MobileGlues as the relevant public references.

Current RendererPlugin-v2 documentation confirms that the launcher reads `fclPlugin_V2` Android manifest metadata, that renderer libraries are placed under the plugin's native library directory, and that the DSL exposes renderer ID, GL/EGL paths, extra dlopen paths, environment variables and Minecraft version bounds.

MobileGlues is a useful reference for desktop-GL-to-GLES translation and shader conversion, but it is LGPL-2.1. LlenoireRender therefore does not copy MobileGlues source into this repository. The implementation here is original and intentionally smaller until a complete compatibility layer can be validated.

## Current engineering conclusion

A true 1.12.2 replacement needs much more than capability detection: fixed-function/legacy GL semantics, buffer/VAO behavior, texture/FBO semantics, shader translation, EGL/context lifecycle and a very broad entry-point surface. This repository establishes those subsystem boundaries and the plugin packaging contract without pretending that the missing compatibility layer already exists.
