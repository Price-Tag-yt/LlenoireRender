#pragma once
#include <string>
namespace llr { enum class LogLevel { Error, Warn, Info, Debug, Trace }; void setLogLevel(LogLevel); LogLevel logLevel(); void log(LogLevel,const std::string&); }
