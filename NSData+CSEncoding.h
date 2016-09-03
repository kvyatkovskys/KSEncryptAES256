//
//  NSData+CSEncoding.h
//
//  Created by Пользователь on 09.08.16.
//  Copyright © 2016 Kvyatkovskys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (CSEncoding)

- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;

@end
