//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUBarButtonItem.h"

@class GUButton;

@interface GUBarButtonItemiOS6 : GUBarButtonItem
{
}

- (void)setTag:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) GUButton *button;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 font:(id)arg2 textGutterWidth:(float)arg3 style:(int)arg4 target:(id)arg5 action:(SEL)arg6;
- (id)imageForSystemItem:(int)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithCustomView:(id)arg1;

@end

