#include "state_cache.h"
namespace llr{void StateCache::invalidate(){v_=false;p_=0;}bool StateCache::setProgram(uint32_t p){if(v_&&p_==p)return false;p_=p;v_=true;return true;}uint32_t StateCache::program()const{return p_;}}
