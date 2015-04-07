//
//  Fork.h
//  Fork
//
//  Created by Sergey Koldaev on 07/04/15.
//  Copyright (c) 2015 Sergey Koldaev. All rights reserved.
//

#ifndef Fork_Fork_h
#define Fork_Fork_h

#ifdef __APPLE__
#include <JavaVM/jni.h>
#else 
#include <jni.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_nebula_SysClass_Fork(JNIEnv *, jclass);
    
#ifdef __cplusplus
}
#endif

#endif
