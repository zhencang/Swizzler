//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class GDUIWebViewDelegateProxyLayer;

@interface UIWebView (GD)
@property(retain, nonatomic, getter=getGDDelegateProxy, setter=setGDDelegateProxy:) GDUIWebViewDelegateProxyLayer *gd_delegateProxy;
- (void)setIsInDidFinishLoadKey:(BOOL)arg1;
- (BOOL)getIsInDidFinishLoadKey;
- (void)setIsInDidStartLoadKey:(BOOL)arg1;
- (BOOL)getIsInDidStartLoadKey;
- (void)setIsInShouldStartLoadKey:(BOOL)arg1;
- (BOOL)getIsInShouldStartLoadKey;
- (void)setNewDelegate:(id)arg1;
- (id)getNewDelegate;
@end

