//
//  ROX SDK version 0.13.2, Build 438
//
//  Copyright (c) 2014 ROX.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ROXOptions.h"
#import "ROXFlag.h"
#import "ROXTargetGroup.h"
#import "ROXExperiment.h"

@interface ROX : NSObject

+(void)setupWithKey:(NSString *)roxKey;
+(void)setupWithKey:(NSString *)roxKey options:(ROXOptions *)options;
+(BOOL)roxDisabled;

+ (UIViewController*)flagsViewController;
+ (BOOL)isTestDevice;

+(void) setCustomStringProperty:(NSString*)value forKey:(NSString*)key;
+(void) setCustomComputedStringProperty:(NSString* (^)())block forKey:(NSString*)key;

+(void) setCustomBooleanProperty:(BOOL)value forKey:(NSString*)key;
+(void) setCustomComputedBooleanProperty:(BOOL (^)())block forKey:(NSString*)key;

+(void) setCustomIntProperty:(int)value forKey:(NSString*)key;
+(void) setCustomComputedIntProperty:(int (^)())block forKey:(NSString*)key;

+(void) setCustomDoubleProperty:(double)value forKey:(NSString*)key;
+(void) setCustomComputedDoubleProperty:(double (^)())block forKey:(NSString*)key;

+(void) setCustomSemverProperty:(NSString*)value forKey:(NSString*)key;
+(void) setCustomComputedSemverProperty:(NSString* (^)())block forKey:(NSString*)key;

+(void) sync;
+(void) unfreeze;

#ifdef DEBUG
void resetROXDispatchOnce(void);
#endif

@end

