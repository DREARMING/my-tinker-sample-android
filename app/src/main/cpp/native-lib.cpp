//
// Created by mvcoder on 2019/2/27.
//

#include<jni.h>
#include <string>
using namespace std;

extern "C" {
    JNIEXPORT jstring JNICALL Java_tinker_sample_android_app_MainActivity_stringFromJNI(
            JNIEnv *env,
            jobject /* this */) {
        string hello = "Hello tinker hotfix! this is patch string";
        return env->NewStringUTF(hello.c_str());
    }
 }