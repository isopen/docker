LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libtdjni
LOCAL_SRC_FILES := td/telegram/td_json_client.cpp
include $(BUILD_SHARED_LIBRARY)
