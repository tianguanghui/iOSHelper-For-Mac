//
//  RegexHelper.h
//  iOSHelper-For-Mac
//
//  Created by Fidetro on 2017/9/25.
//  Copyright © 2017年 Fidetro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RegexHelper : NSObject

+ (NSArray *)matchString:(NSString *)string toRegexString:(NSString *)regexStr;

@end
