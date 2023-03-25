#include <jni.h>
#include "react-native-nice-learning.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_nicelearning_NiceLearningModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return nicelearning::multiply(a, b);
}
