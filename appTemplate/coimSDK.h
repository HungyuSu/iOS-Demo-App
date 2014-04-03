//
//  ReqUtil.h
//  CoimotionSDK
//
//  Created by Mac on 2014/3/24.
//  Copyright (c) 2014年 Gocharm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

#define sdk_version 0.9

@interface coimSDK : NSObject

struct attachType {
    __unsafe_unretained NSString * NICON;
    __unsafe_unretained NSString * NFILE;
    __unsafe_unretained NSString * NIMAGE;
    __unsafe_unretained NSString * NVIDEO;
    __unsafe_unretained NSString * NAUDIO;
};

extern const struct attachType nType;

extern const NSString *registerURL;
extern const NSString *activateURL;
extern const NSString *logoutURL;
extern const int maxFileSize;
extern const NSString *reqigsterConnLabel;

+ (void)initSDK:(void (^)(NSError *))errBlock;

+ (NSURLConnection *)logoutFrom:(NSString *)relativeURL
                       delegate:(id)aDelegate;

+ (NSURLConnection *)sendTo:(NSString *)relativeURL
              withParameter:(NSDictionary *)params
                   delegate:(id)aDelegate;

+ (NSURLConnection *)loginTo:(NSString *)relativeURL
               withParameter:(NSDictionary *)params
                    delegate:(id)aDelegate;

+ (NSURLConnection *)registerWithParameter:(NSDictionary *)params
                                  delegate:(id)aDelegate;

+ (NSURLConnection *)attachFiles:(NSArray *)files
                              To:(NSString *)relativeURL
                      withParams:(NSDictionary *)params
                        delegate:(id)aDelegate;

+ (NSURLConnection *)download:(id)aDelegate;
@end