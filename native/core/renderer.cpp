#include "../config/config.h"
#include "../diagnostics/log.h"
#include "../diagnostics/caps.h"
#include <GLES3/gl3.h>
#include <string>
namespace llr{static Config cfg;void initialize(){cfg=readConfig();if(cfg.logLevel=="warn")setLogLevel(LogLevel::Warn);else if(cfg.logLevel=="info")setLogLevel(LogLevel::Info);else if(cfg.logLevel=="debug")setLogLevel(LogLevel::Debug);else if(cfg.logLevel=="trace")setLogLevel(LogLevel::Trace);log(LogLevel::Info,std::string("LlenoireRender ")+LLR_VERSION+" MC="+LLR_TARGET_MC+" initialized");}std::string status(){auto c=queryCaps();return std::string("LlenoireRender ")+LLR_VERSION+" | "+c.vendor+" | "+c.renderer+" | "+c.version;}}
extern "C" __attribute__((constructor)) void llr_constructor(){llr::initialize();}
extern "C" const char* llrGetVersion(){return LLR_VERSION;}
extern "C" const char* llrGetCapabilities(){static std::string s;s=llr::capsJson(llr::queryCaps());return s.c_str();}
