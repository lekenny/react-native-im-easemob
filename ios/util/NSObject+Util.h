//
//  NSObject+Util.h
//  RNEaseMob
//
//  Created by Xiaosong Gao on 2018/6/13.
//  Copyright © 2018年. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Util)

- (void)updateWithDictionary:(NSDictionary *)dic;
- (NSDictionary *)objectToDictionary;
- (NSString *)objectToJSONString;

@end
