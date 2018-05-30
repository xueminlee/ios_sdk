//
//  ADJUserDefaults.h
//  Adjust
//
//  Created by Uglješa Erceg on 16.08.17.
//  Copyright © 2017 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADJUserDefaults : NSObject

+ (void)savePushToken:(NSData *)pushToken;

+ (NSData *)getPushToken;

+ (void)removePushToken;

+ (void)setInstallTracked;

+ (BOOL)getInstallTracked;

+ (void)setGdprForgetMe;

+ (BOOL)getGdprForgetMe;

+ (void)removeGdprForgetMe;

+ (void)saveDeeplink:(NSURL *)deeplink;

+ (NSURL *)getDeeplink;

+ (void)removeDeeplink;

+ (void)clearAdjustStuff;

@end
