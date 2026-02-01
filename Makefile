export THEOS=/home/hdlios/theos
ARCHS = arm64
DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
IGNORE_WARNINGS = 1
# THEOS_PACKAGE_SCHEME = rootless
TARGET = iphone:clang:latest:14.0

include $(THEOS)/makefiles/common.mk

FRAMEWORK_NAME = App


$(FRAMEWORK_NAME)_LDFLAGS += JRMemory.framework/JRMemory
$(FRAMEWORK_NAME)_CCFLAGS = -std=c++17 -fno-rtti -fno-exceptions -DNDEBUG -Wall -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-unused-function -fvisibility=hidden -fexceptions

$(FRAMEWORK_NAME)_CFLAGS = -fobjc-arc -Wall -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-unused-function -fvisibility=hidden

ifeq ($(IGNORE_WARNINGS),1)
  $(FRAMEWORK_NAME)_CFLAGS += -w
  $(FRAMEWORK_NAME)_CCFLAGS += -w
endif
$(FRAMEWORK_NAME)_FILES = $(wildcard PUBG/AEScrypt/*.m) $(wildcard PatchNonJB/*.mm) $(wildcard antihook/*.m) $(wildcard antihook/*.c) $(wildcard hook/*.c) $(wildcard PUBG/AEScrypt/*.mm) $(wildcard PUBG/Shark/*.c) $(wildcard PUBG/Shark/*.cpp) $(wildcard PUBG/Shark/*.mm) $(wildcard PUBG/Shark/IMGUI/*.mm) $(wildcard PUBG/Shark/IMGUI/*.cpp) $(wildcard PUBG/Shark/MenuLoad/*.mm) $(wildcard PUBG/Shark/MenuLoad/*.m) $(wildcard PUBG/Shark/Vector/*.cpp) $(wildcard SDK/*.cpp)
$(FRAMEWORK_NAME)_FRAMEWORKS = IOKit  UIKit Foundation Security QuartzCore CoreGraphics CoreText  AVFoundation Accelerate GLKit SystemConfiguration GameController
include $(THEOS_MAKE_PATH)/framework.mk




