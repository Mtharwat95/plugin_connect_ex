#include <jni.h>
#include <string>
#include <iostream>

#include "PCSCLib.h"
extern "C"
JNIEXPORT jstring JNICALL

Java_com_example_plugin_1connect_1ex_MiddleWare_pluginConnect(JNIEnv *env, jobject thiz) {

    std::string hello = get_string(env);
//    std::string hello = "adda";

    return env->NewStringUTF(hello.c_str());
}