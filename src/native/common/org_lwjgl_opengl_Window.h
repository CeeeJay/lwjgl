/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_Window */

#ifndef _Included_org_lwjgl_opengl_Window
#define _Included_org_lwjgl_opengl_Window
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: _00024assertionsDisabled */
/* Inaccessible static: x */
/* Inaccessible static: y */
/* Inaccessible static: width */
/* Inaccessible static: height */
/* Inaccessible static: title */
/* Inaccessible static: fullscreen */
/* Inaccessible static: vsync */
/* Inaccessible static: vbo_tracker */
/* Inaccessible static: context */
/* Inaccessible static: class_000240 */
/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nSetTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nSetTitle
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsCloseRequested
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsCloseRequested
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsVisible
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsVisible
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsActive
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsActive
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsDirty
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsDirty
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    swapBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_swapBuffers
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nMakeCurrent
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nMakeCurrent
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nCreate
 * Signature: (Ljava/lang/String;IIIIZIIIII)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nCreate
  (JNIEnv *, jclass, jstring, jint, jint, jint, jint, jboolean, jint, jint, jint, jint, jint);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nDestroy
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nUpdate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nUpdate
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsVSyncEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsVSyncEnabled
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nSetVSyncEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nSetVSyncEnabled
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nReshape
 * Signature: (IIII)V
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nReshape
  (JNIEnv *, jclass, jint, jint, jint, jint);
 */

#ifdef __cplusplus
}
#endif
#endif
