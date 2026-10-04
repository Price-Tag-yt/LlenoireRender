#include <GLES3/gl3.h>
namespace llr{bool glesAvailable(){return glGetString(GL_VERSION)!=nullptr;}}
