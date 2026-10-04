#include "caps.h"
#include <GLES3/gl3.h>
#include <EGL/egl.h>
#include <sstream>
namespace llr { Caps queryCaps(){Caps c;auto s=[](GLenum e){auto p=glGetString(e);return p?(const char*)p:"";};c.vendor=s(GL_VENDOR);c.renderer=s(GL_RENDERER);c.version=s(GL_VERSION);c.extensions=s(GL_EXTENSIONS);glGetIntegerv(GL_MAX_TEXTURE_SIZE,&c.maxTexture);glGetIntegerv(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS,&c.maxUnits);c.gles3=c.version.find("OpenGL ES 3")!=std::string::npos;return c;} std::string capsJson(const Caps&c){std::ostringstream o;o<<"{\"vendor\":\""<<c.vendor<<"\",\"renderer\":\""<<c.renderer<<"\",\"version\":\""<<c.version<<"\",\"maxTexture\":"<<c.maxTexture<<",\"maxUnits\":"<<c.maxUnits<<",\"gles3\":"<<(c.gles3?"true":"false")<<"}";return o.str();} }
