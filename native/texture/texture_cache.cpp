#include <GLES3/gl3.h>
#include <unordered_map>
namespace llr{class TextureCache{std::unordered_map<GLuint,GLenum> m_;public:void remember(GLuint i,GLenum f){m_[i]=f;}void erase(GLuint i){m_.erase(i);}void clear(){m_.clear();}size_t size()const{return m_.size();}};}
