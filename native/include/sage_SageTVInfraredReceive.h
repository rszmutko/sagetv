/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_SageTVInfraredReceive */

#ifndef _Included_sage_SageTVInfraredReceive
#define _Included_sage_SageTVInfraredReceive
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: loadedLib */
/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    pvIRPortThread0
 * Signature: (Lsage/SageTVInputCallback;)V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_pvIRPortThread0
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    dvcrIRPortThread0
 * Signature: (Lsage/SageTVInputCallback;)V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_dvcrIRPortThread0
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    avrIRPortThread0
 * Signature: (Lsage/SageTVInputCallback;)V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_avrIRPortThread0
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    irmanPortInit0
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_SageTVInfraredReceive_irmanPortInit0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    closeIRManPort0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_closeIRManPort0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    irmanPortThread0
 * Signature: (Lsage/SageTVInputCallback;J)V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_irmanPortThread0
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    usbuirtRecvPortInit0
 * Signature: (Lsage/SageTVInputCallback;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_SageTVInfraredReceive_usbuirtRecvPortInit0
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sage_SageTVInfraredReceive
 * Method:    closeUsbuirtRecvPort0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sage_SageTVInfraredReceive_closeUsbuirtRecvPort0
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
