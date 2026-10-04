#pragma once
#include <string>
namespace llr { struct Config{std::string profile="BALANCED";bool shaderCache=true,textureCache=true,stateCache=true;std::string framePacing="auto";bool dynamicResolution=false;float resolutionScale=1.0f;int msaa=0;std::string logLevel="error";}; Config readConfig(); }
