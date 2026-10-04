#include <jni.h>
#include <string>
namespace llr{std::string status();}
extern "C" JNIEXPORT jstring JNICALL Java_com_llenoire_render_MainActivity_nativeStatus(JNIEnv*e,jclass){return e->NewStringUTF(llr::status().c_str());}
