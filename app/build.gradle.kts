plugins { id("com.android.application") }

android {
    namespace = "com.llenoire.render"
    compileSdk = 35
    defaultConfig {
        applicationId = "com.llenoire.render"
        minSdk = 26
        targetSdk = 35
        versionCode = 1
        versionName = "0.1.0"
        ndk { abiFilters += listOf("arm64-v8a", "armeabi-v7a", "x86_64") }
        externalNativeBuild { cmake { cppFlags += listOf("-std=c++17", "-O2", "-fno-exceptions", "-fno-rtti") } }
    }
    buildFeatures { buildConfig = true; resValues = true }
    externalNativeBuild { cmake { path = file("../native/CMakeLists.txt"); version = "3.22.1" } }
    packaging { jniLibs { useLegacyPackaging = true } }
    defaultConfig {
        resValue("string", "app_name", "LlenoireRender 1.12.2")
        resValue("string", "title_profile", "Performance profile")
        resValue("string", "title_dynamic_resolution", "Dynamic resolution")
        resValue("string", "title_resolution_scale", "Resolution scale")
        resValue("string", "title_frame_pacing", "Frame pacing")
        resValue("string", "title_shader_cache", "Shader cache")
        resValue("string", "title_state_cache", "State cache")
        resValue("string", "title_msaa", "MSAA")
        resValue("string", "title_log_level", "Log level")
        resValue("string", "config", llrConfigJson())
    }
}

fun llrConfigJson(): String = """
{"displayName":"LlenoireRender 1.12.2","rendererId":"llenoire_1_12_2","rendererGLPath":"**|libLlenoireRender.so","rendererEGLPath":"**|libLlenoireRender.so","dlopenLibPaths":[],"env":[{"type":"NormalEnv","key":"LLR_SHADER_CACHE","value":"1"},{"type":"NormalEnv","key":"LLR_TEXTURE_CACHE","value":"1"},{"type":"NormalEnv","key":"LLR_STATE_CACHE","value":"1"},{"type":"SelectableEnv","key":"LLR_PROFILE","title":{"key":"title_profile"},"check":null,"items":{"defaultValue":"BALANCED","values":["ULTRA_LOW","LOW","QUALITY","CUSTOM"]}},{"type":"SelectableEnv","key":"LLR_FRAME_PACING","title":{"key":"title_frame_pacing"},"check":null,"items":{"defaultValue":"auto","values":["off","low_latency","stable"]}},{"type":"SelectableEnv","key":"LLR_LOG_LEVEL","title":{"key":"title_log_level"},"check":null,"items":{"defaultValue":"error","values":["warn","info","debug","trace"]}},{"type":"SelectableEnv","key":"LLR_MSAA","title":{"key":"title_msaa"},"check":null,"items":{"defaultValue":"0","values":["2","4"]}},{"type":"SelectableEnv","key":"LLR_DYNAMIC_RESOLUTION","title":{"key":"title_dynamic_resolution"},"check":true,"items":{"defaultValue":"0","values":["1"]}},{"type":"CustomizableEnv","key":"LLR_RESOLUTION_SCALE","title":{"key":"title_resolution_scale"},"defaultValue":"1.0"}],"minMCVer":"1.12.2","maxMCVer":"1.12.2"}
""".trimIndent()
