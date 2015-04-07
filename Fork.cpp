
#include "Fork.h"
#include <sys/types.h>
#include <unistd.h>

JNIEXPORT jint JNICALL Java_nebula_SysClass_Fork(JNIEnv *, jclass){
    return fork();
}