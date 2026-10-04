#include "preprocessor.h"
#include <sstream>
namespace llr{std::string preprocessGlsl(const std::string&s,bool es){std::istringstream in(s);std::ostringstream body;std::string l;bool ver=false,prec=false;while(std::getline(in,l)){if(l.rfind("#version",0)==0){ver=true;if(es)body<<"#version 300 es\n";else body<<l<<'\n';continue;}if(l.find("precision ")==0)prec=true;body<<l<<'\n';}if(es&&!prec){std::ostringstream o;if(!ver)o<<"#version 300 es\n";o<<"precision highp float;\nprecision highp int;\n"<<body.str();return o.str();}return body.str();}}
