//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface GDAppServer : NSObject
{
    NSString *server;
    NSNumber *port;
    NSNumber *priority;
}

@property(retain, nonatomic) NSNumber *priority; // @synthesize priority;
@property(retain, nonatomic) NSNumber *port; // @synthesize port;
@property(retain, nonatomic) NSString *server; // @synthesize server;
- (void)dealloc;
- (id)initWithServer:(id)arg1 andPort:(id)arg2 andPriority:(id)arg3;

@end

