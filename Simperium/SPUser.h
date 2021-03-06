//
//  SPUser.h
//  Simperium
//
//  Created by Michael Johnston on 11-06-03.
//  Copyright 2011 Simperium. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SPUser : NSObject {
    NSString *email;
    NSString *authToken;
}

@property (copy, nonatomic, readonly) NSString *email;
@property (copy, nonatomic) NSString *authToken;

-(id)initWithEmail:(NSString *)username token:(NSString *)token;
-(NSString *)hashedEmail;
-(BOOL)authenticated;

// Stubs that will eventually allow you to store/retrieve custom user data
-(void)setCustomObject:(id)object forKey:(NSString *)key;
-(id)getCustomObjectForKey:(NSString *)key;

@end
