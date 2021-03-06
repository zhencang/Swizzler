/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSTimer, UIAlertView;

@interface AlertView : _ABAddressBookAddRecord <UIAlertViewDelegate>
{
    UIAlertView *alertView;
    NSTimer *timer;
    BOOL isTimerEnabled;
    int timeForTimer;
    NSString *textForView;
    NSString *titleForView;
    NSString *titleForOkButton;
    NSString *titleForOtherButton;
    void *timerCall;
    void *buttonCall;
}

- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)handleTimerFire:(id)fp8;
- (void)performInUIThread;
- (void)show;
- (void)setButtonCallback:(void *)fp8;
- (void)setTimerCallback:(void *)fp8;
- (id)initWithViewData:(id)fp8 viewTitle:(id)fp12 okButtonTitle:(id)fp16 otherButtonTitle:(id)fp20 enabledTimer:(BOOL)fp24 timerTime:(int)fp28;
- (void)dealloc;

@end

