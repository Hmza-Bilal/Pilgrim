#include <jni.h>

extern "C" JNIEXPORT jdouble JNICALL
Java_com_example_calculator_MainActivity_calculate(JNIEnv *env, jobject thiz, jdouble num1, jdouble num2, jint op) {
    double result = 0;
    switch (op) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
    }
    return result;
}
