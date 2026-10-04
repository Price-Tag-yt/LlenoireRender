#pragma once
#include <string>
namespace llr { struct Caps{std::string vendor,renderer,version,extensions;int maxTexture=0,maxUnits=0;bool gles3=false;}; Caps queryCaps();std::string capsJson(const Caps&); }
