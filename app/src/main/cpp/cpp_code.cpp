#include <jni.h>
#include <string>
#include <iostream>

#include "PCSCLib.h"
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_plugin_1connect_1ex_MiddleWare_pluginConnect(JNIEnv *env, jobject thiz) {

    std::string hello = get_string();
//    std::string hello = "adda";

    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_plugin_1connect_1ex_MiddleWare_listDevices(JNIEnv *env, jobject thiz) {
unsigned char * reader=NULL;
unsigned  int readerLength=0;
int ret=-1;
 ret = Plugin_ListReadersEx(&reader,&readerLength);
 std::string hello;
 for(int iter=0; iter< readerLength; iter++)
     hello.push_back(reader[iter]);
//    std::string hello = "adda";

return env->NewStringUTF(hello.c_str());
}