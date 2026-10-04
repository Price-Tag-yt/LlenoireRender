#include "log.h"
#include <android/log.h>
namespace llr { static LogLevel g=LogLevel::Error; void setLogLevel(LogLevel x){g=x;} LogLevel logLevel(){return g;} void log(LogLevel l,const std::string&s){if((int)l>(int)g)return;int p=ANDROID_LOG_ERROR;if(l==LogLevel::Warn)p=ANDROID_LOG_WARN;else if(l==LogLevel::Info)p=ANDROID_LOG_INFO;else if(l==LogLevel::Debug)p=ANDROID_LOG_DEBUG;else if(l==LogLevel::Trace)p=ANDROID_LOG_VERBOSE;__android_log_print(p,"LlenoireRender","%s",s.c_str());}}
