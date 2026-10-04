#pragma once
#include <cstdint>
namespace llr { class StateCache{uint32_t p_=0;bool v_=false;public:void invalidate();bool setProgram(uint32_t);uint32_t program()const;};}
