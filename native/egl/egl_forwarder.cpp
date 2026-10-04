#include <EGL/egl.h>
#include <dlfcn.h>
extern "C" EGLDisplay eglGetDisplay(EGLNativeDisplayType id){static void*h=nullptr;if(!h)h=dlopen("libEGL.so",RTLD_NOW|RTLD_LOCAL);using F=EGLDisplay(*)(EGLNativeDisplayType);auto f=h?(F)dlsym(h,"eglGetDisplay"):nullptr;return f?f(id):EGL_NO_DISPLAY;}
extern "C" __eglMustCastToProperFunctionPointerType eglGetProcAddress(const char*n){static void*h=nullptr;if(!h)h=dlopen("libEGL.so",RTLD_NOW|RTLD_LOCAL);using F=__eglMustCastToProperFunctionPointerType(*)(const char*);auto f=h?(F)dlsym(h,"eglGetProcAddress"):nullptr;return f?f(n):nullptr;}
