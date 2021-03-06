//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PUICCrownInputSequencerDataSource.h"
#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"
#import "SPInterfaceDelegate.h"

@class NSArray, NSBundle, NSDictionary, NSMutableArray, NSString, PUICActionGroup, PUICActionItem, PUICActivityIndicatorView, PUICTableView, SPInterfaceGroupView, UIColor, UIImage, UIView;

@interface SPInterfaceViewController : UIViewController <PUICCrownInputSequencerDataSource, PUICTableViewDataSource, PUICTableViewDelegate, SPInterfaceDelegate>
{
    _Bool _isNotification;
    _Bool _isGlance;
    _Bool _offsetNotificationContent;
    _Bool _detentsDirty;
    _Bool _hasInterfaceActions;
    _Bool _kvObservingSimNotificationActionTable;
    id <SPInterfaceViewControllerDelegate> _vcdelegate;
    NSString *_teamID;
    NSBundle *_bundle;
    NSArray *_simulatorNotificationButtonsInfo;
    UIImage *_simulatorNotificationAppIcon;
    NSString *_simulatorNotificationAppName;
    UIColor *_customNotificationSashColor;
    NSString *_staticNotificationAlertLabelText;
    NSString *_activityType;
    NSDictionary *_activityUserInfo;
    NSDictionary *_interfaceDescription;
    SPInterfaceGroupView *_rootGroupView;
    NSString *_UUID;
    PUICActionGroup *_actionGroup;
    NSMutableArray *_extraActions;
    PUICActivityIndicatorView *_spinnerView;
    UIView *_simulatorNotificationSash;
    PUICTableView *_simulatorNotificationActionTable;
    NSArray *_simulatorNotificationActionItems;
    PUICActionItem *_simulatorNotificationDismissItem;
    NSDictionary *_simulatorNotificationActionTagToIdentifierMap;
}

+ (id)interfaceViewControllerForIdentifier:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSDictionary *simulatorNotificationActionTagToIdentifierMap; // @synthesize simulatorNotificationActionTagToIdentifierMap=_simulatorNotificationActionTagToIdentifierMap;
@property(retain, nonatomic) PUICActionItem *simulatorNotificationDismissItem; // @synthesize simulatorNotificationDismissItem=_simulatorNotificationDismissItem;
@property(retain, nonatomic) NSArray *simulatorNotificationActionItems; // @synthesize simulatorNotificationActionItems=_simulatorNotificationActionItems;
@property(retain, nonatomic) PUICTableView *simulatorNotificationActionTable; // @synthesize simulatorNotificationActionTable=_simulatorNotificationActionTable;
@property(retain, nonatomic) UIView *simulatorNotificationSash; // @synthesize simulatorNotificationSash=_simulatorNotificationSash;
@property(nonatomic) _Bool kvObservingSimNotificationActionTable; // @synthesize kvObservingSimNotificationActionTable=_kvObservingSimNotificationActionTable;
@property(retain, nonatomic) PUICActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) _Bool hasInterfaceActions; // @synthesize hasInterfaceActions=_hasInterfaceActions;
@property(retain, nonatomic) NSMutableArray *extraActions; // @synthesize extraActions=_extraActions;
@property(retain, nonatomic) PUICActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property(nonatomic) _Bool detentsDirty; // @synthesize detentsDirty=_detentsDirty;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) SPInterfaceGroupView *rootGroupView; // @synthesize rootGroupView=_rootGroupView;
@property(retain, nonatomic) NSDictionary *interfaceDescription; // @synthesize interfaceDescription=_interfaceDescription;
@property(readonly, copy, nonatomic) NSDictionary *activityUserInfo; // @synthesize activityUserInfo=_activityUserInfo;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *staticNotificationAlertLabelText; // @synthesize staticNotificationAlertLabelText=_staticNotificationAlertLabelText;
@property(retain, nonatomic) UIColor *customNotificationSashColor; // @synthesize customNotificationSashColor=_customNotificationSashColor;
@property(retain, nonatomic) NSString *simulatorNotificationAppName; // @synthesize simulatorNotificationAppName=_simulatorNotificationAppName;
@property(retain, nonatomic) UIImage *simulatorNotificationAppIcon; // @synthesize simulatorNotificationAppIcon=_simulatorNotificationAppIcon;
@property(retain, nonatomic) NSArray *simulatorNotificationButtonsInfo; // @synthesize simulatorNotificationButtonsInfo=_simulatorNotificationButtonsInfo;
@property(nonatomic) _Bool offsetNotificationContent; // @synthesize offsetNotificationContent=_offsetNotificationContent;
@property(nonatomic) _Bool isGlance; // @synthesize isGlance=_isGlance;
@property(nonatomic) _Bool isNotification; // @synthesize isNotification=_isNotification;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) __weak id <SPInterfaceViewControllerDelegate> vcdelegate; // @synthesize vcdelegate=_vcdelegate;
- (void).cxx_destruct;
- (void)crownInputSequencer:(id)arg1 previousDetent:(id *)arg2 nextDetent:(id *)arg3 forOffset:(double)arg4;
- (void)updateUserActivity:(id)arg1;
- (void)setUserActivity;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)performAction:(id)arg1 withValue:(id)arg2;
- (void)performActionForUserActivity:(id)arg1;
- (void)performActionWithItemID:(id)arg1 forNotificationID:(id)arg2;
- (void)setInterfaceValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)notifyDetentsChanged;
- (void)updateSimulatorActionTableFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_hideLoadingView;
- (void)_finishedExtendedLaunchTest;
- (void)_showLoadingView;
- (void)loadView;
- (id)rootView;
- (id)actionController;
- (void)menuAction:(id)arg1;
- (_Bool)canProvideActionController;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)prefersStatusBarHidden;
- (void)launchAppWithActionItemID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createSimulatorNotificationButtonsInView:(id)arg1;
- (void)addTopRoundedCornersMaskToView:(id)arg1;
- (void)logInterfaceViewControllers;
- (void)didRecieveContentSizeDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootItemDescription:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

