//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NMSPersistentDictionary, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate>
{
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    struct __CFString *_loggingFacility;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    _Bool _delegateRequiresACKs;
    id <NMSMessageCenterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) _Bool delegateRequiresACKs; // @synthesize delegateRequiresACKs=_delegateRequiresACKs;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <NMSMessageCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (id)_decodeIncomingRequestData:(id)arg1 context:(id)arg2;
- (id)_buildDataForResponse:(id)arg1 options:(id *)arg2;
- (id)_buildDataForRequest:(id)arg1 options:(id *)arg2;
- (void)dropExtantMessages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *actionQ;
@property(readonly, nonatomic) IDSService *idsService;
- (void)resume;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (void)_expireMessages;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (void)addResponseHandler:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addErrorHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addRequestHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)responseHandlers;
- (id)errorHandlers;
- (id)requestHandlers;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheFolderPath:(id)arg3 loggingFacility:(struct __CFString *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

