//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class GTDayView, GTEventBubble, NSArray, NSDate, UIView;

@protocol GTDayViewDelegate <NSObject>
- (void)dayView:(GTDayView *)arg1 addCalendarEventAt:(NSDate *)arg2 fromPoint:(struct CGPoint)arg3 inView:(UIView *)arg4 allDay:(BOOL)arg5;
- (void)dayView:(GTDayView *)arg1 didTouchBubble:(GTEventBubble *)arg2;
- (void)dayView:(GTDayView *)arg1 touchedInRangeOfBubbles:(NSArray *)arg2;
@end

