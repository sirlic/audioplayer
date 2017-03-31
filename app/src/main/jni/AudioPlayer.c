//
// Created by Jonesx on 2016/3/19.
//
#include "log.h"
#include "jonesx_audioplayer_AudioPlayer.h"
#include "AudioDevice.h"

JNIEXPORT jint JNICALL Java_jonesx_audioplayer_AudioPlayer_play
        (JNIEnv * env, jclass clazz)
{
        LOGD("play");
        play();
}

JNIEXPORT jint JNICALL Java_jonesx_audioplayer_AudioPlayer_stop
        (JNIEnv * env, jclass clazz)
{
        LOGD("stop");
        shutdown();
}