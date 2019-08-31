
//
//  NSUnity.h
//
//  Copyright © 2019, Nathanael Anderson. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for NSUnity.
FOUNDATION_EXPORT double NSUnityVersionNumber;

//! Project version string for NSUnity.
FOUNDATION_EXPORT const unsigned char NSUnityVersionString[];

extern void unity_framework_init();
extern void unity_framework_activate();
extern void unity_framework_pause();
extern void unity_framework_resume();
extern void unity_framework_send_message(NSString* gameObject, NSString* methodName, NSString* message)
extern void unity_framework_deactivate();
