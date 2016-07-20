/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTCalendarDatePickerTileLayer.h"

@interface GTCalendarDatePickerDayTileLayer : GTCalendarDatePickerTileLayer
{
    BOOL _isToday;
    BOOL _isInSelectedWeek;
    BOOL _isInCurrentMonth;
    BOOL _isHighlightsSelectedWeek;
}

+ (void)initialize;
- (BOOL)isHighlightsSelectedWeek;
- (BOOL)isInCurrentMonth;
- (BOOL)isInSelectedWeek;
- (BOOL)isToday;
- (void)updateBackgroundColor;
- (void)updateTextColor;
- (void)setIsHighlightsSelectedWeek:(BOOL)fp8;
- (void)setIsInSelectedWeek:(BOOL)fp8;
- (void)setIsInCurrentMonth:(BOOL)fp8;
- (void)setIsToday:(BOOL)fp8;
- (id)init;

@end
