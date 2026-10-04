#include "config.h"
#include <cstdlib>
#include <algorithm>
namespace llr { static const char* e(const char*k){return std::getenv(k);} static bool y(const char*v){return v&&(std::string(v)=="1"||std::string(v)=="true"||std::string(v)=="on");} Config readConfig(){Config c;if(auto v=e("LLR_PROFILE"))c.profile=v;if(auto v=e("LLR_SHADER_CACHE"))c.shaderCache=y(v);if(auto v=e("LLR_TEXTURE_CACHE"))c.textureCache=y(v);if(auto v=e("LLR_STATE_CACHE"))c.stateCache=y(v);if(auto v=e("LLR_FRAME_PACING"))c.framePacing=v;if(auto v=e("LLR_DYNAMIC_RESOLUTION"))c.dynamicResolution=y(v);if(auto v=e("LLR_RESOLUTION_SCALE"))c.resolutionScale=std::clamp(std::strtof(v,nullptr),0.5f,1.0f);if(auto v=e("LLR_MSAA"))c.msaa=std::max(0,std::atoi(v));if(auto v=e("LLR_LOG_LEVEL"))c.logLevel=v;return c;} }
