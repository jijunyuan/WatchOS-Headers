//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUICApplicationStatusBarItem, UIColor, UIFont, UIView;

@protocol PUICStatusBarAppContextViewDataSource <NSObject>
- (_Bool)isObservingStatusBarAppContextDataSource:(id <PUICStatusBarAppContextViewDataSourceObserver>)arg1;
- (void)removeStatusBarAppContextDataSourceObserver:(id <PUICStatusBarAppContextViewDataSourceObserver>)arg1;
- (void)addStatusBarAppContextDataSourceObserver:(id <PUICStatusBarAppContextViewDataSourceObserver>)arg1;
- (_Bool)statusBarAppContextActivityIndicatorVisible;
- (_Bool)statusBarAppContextNavUIBackButtonDisabled;
- (_Bool)statusBarAppContextShowNavUI;
- (UIColor *)statusBarAppContextBackgroundColor;
- (UIView *)statusBarAppContextTitleAccessoryView;
- (double)statusBarAppContextTitleBaseLine;
- (UIFont *)statusBarAppContextTitleFont;
- (UIColor *)statusBarAppContextTitleColor;
- (NSString *)statusBarAppContextTitleText;

@optional
- (PUICApplicationStatusBarItem *)dataAsApplicationStatusBarItem;
@end

