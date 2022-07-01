/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_network_CefPostDataElement_N */

#ifndef _Included_org_cef_network_CefPostDataElement_N
#define _Included_org_cef_network_CefPostDataElement_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_CefPostDataElement_CTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1CefPostDataElement_1CTOR(JNIEnv*,
                                                                       jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_IsReadOnly
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1IsReadOnly(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_SetToEmpty
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1SetToEmpty(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_SetToFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1SetToFile(JNIEnv*,
                                                        jobject,
                                                        jstring);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_SetToBytes
 * Signature: (I[B)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1SetToBytes(JNIEnv*,
                                                         jobject,
                                                         jint,
                                                         jbyteArray);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_GetType
 * Signature: ()Lorg/cef/network/CefPostDataElement/Type;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1GetType(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_GetFile
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1GetFile(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_GetBytesCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1GetBytesCount(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_GetBytes
 * Signature: (I[B)I
 */
JNIEXPORT jint JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1GetBytes(JNIEnv*,
                                                       jobject,
                                                       jint,
                                                       jbyteArray);

/*
 * Class:     org_cef_network_CefPostDataElement_N
 * Method:    N_CefPostDataElement_DTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefPostDataElement_1N_N_1CefPostDataElement_1DTOR(JNIEnv*,
                                                                       jobject);

#ifdef __cplusplus
}
#endif
#endif