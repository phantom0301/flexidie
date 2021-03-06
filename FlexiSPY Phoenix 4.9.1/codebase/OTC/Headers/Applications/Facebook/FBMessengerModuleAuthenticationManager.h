/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "FBAuthenticationManager-Protocol.h"

@class FBMessengerUser;
@protocol FBAPISessionStore;

@interface FBMessengerModuleAuthenticationManager : NSObject //<FBAuthenticationManager>
{
    FBMessengerUser *_meUser;
    id <FBAPISessionStore> _sessionStore;
}

+ (id)authenticationManagerWithSessionStore:(id)arg1;
@property(retain, nonatomic) id <FBAPISessionStore> sessionStore; // @synthesize sessionStore=_sessionStore;
- (id)keychainUser;
- (BOOL)hasKeychainUser;
- (void)saveKeychainCredentials:(id)arg1;
- (id)keychainCredentials;
- (BOOL)hasKeychainCredentials;
- (void)clearKeychainCredentials;
- (void)clear;
- (void)prepareMeUser;
- (id)meUser;
- (BOOL)hasMeUser;
- (void)saveFacebookCredentials:(id)arg1;
- (id)facebookCredentials;
- (BOOL)hasFacebookCredentials;
- (void)dealloc;

@end

