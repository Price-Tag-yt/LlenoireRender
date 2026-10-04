#include <GLES3/gl3.h>
namespace llr{bool framebufferComplete(GLuint f){GLint old=0;glGetIntegerv(GL_FRAMEBUFFER_BINDING,&old);glBindFramebuffer(GL_FRAMEBUFFER,f);bool ok=glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE;glBindFramebuffer(GL_FRAMEBUFFER,(GLuint)old);return ok;}}
