//
//  TCJSONKit.h
//  TCJSONKit
//
//  Created by tauCross on 16/4/19.
//  Copyright © 2016年 tauCross. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface TCJSONKit : NSObject

+ (NSString *)stringWithArray:(NSArray *)array;
+ (NSString *)stringWithDictionary:(NSDictionary *)dictionary;
+ (id)objectWithString:(NSString *)string;

@end



@interface NSObject (TCJSONKit)

- (NSString *)JSONString;

@end



@interface NSArray (TCJSONKit)

- (NSString *)JSONString;

@end



@interface NSDictionary (TCJSONKit)

- (NSString *)JSONString;

@end



@interface NSString (TCJSONKit)

- (id)JSONObject;

@end
