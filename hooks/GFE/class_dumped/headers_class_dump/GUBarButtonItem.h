//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIBarButtonItem.h"

#import "UIAccessibilityIdentification.h"

@class GUButton, NSString;

@interface GUBarButtonItem : UIBarButtonItem <UIAccessibilityIdentification>
{
    GUButton *_button;
    NSString *_accessibilityIdentifier;
}

+ (id)alloc;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;

@end

