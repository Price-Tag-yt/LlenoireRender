#include <chrono>
namespace llr{class FramePacer{std::chrono::steady_clock::time_point t_=std::chrono::steady_clock::now();public:double frameMs(){auto n=std::chrono::steady_clock::now();double x=std::chrono::duration<double,std::milli>(n-t_).count();t_=n;return x;}};}
