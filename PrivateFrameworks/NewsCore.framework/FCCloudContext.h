/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCloudContext : NSObject <FCCKDatabaseEncryptionDelegate, FCCacheFlushing, FCContentContext, FCPrivateDataContext, FCTestingContext> {
    <FCAppActivityMonitor> * _appActivityMonitor;
    <FCBackgroundTaskable> * _backgroundTaskable;
    <FCContentContext> * _contentContext;
    bool  _deviceIsiPad;
    FCCommandQueue * _endpointCommandQueue;
    FCClientEndpointConnection * _endpointConnection;
    FCFeedManager * _feedManager;
    <FCFlintHelper> * _flintHelper;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCNotificationController * _notificationController;
    FCCommandQueue * _notificationsEndpointCommandQueue;
    FCNotificationsEndpointConnection * _notificationsEndpointConnection;
    <FCPPTContext> * _pptContext;
    <FCPrivateDataContext> * _privateDataContext;
    FCPurchaseController * _purchaseController;
    FCSubscriptionController * _subscriptionController;
}

@property (nonatomic, retain) <FCAppActivityMonitor> *appActivityMonitor;
@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, readonly, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentToken;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceIsiPad;
@property (nonatomic, readonly) FCCommandQueue *endpointCommandQueue;
@property (nonatomic, readonly) FCClientEndpointConnection *endpointConnection;
@property (nonatomic, readonly) FCFeedManager *feedManager;
@property (nonatomic, readonly) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic) <FCFlintHelper> *flintHelper;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCContentContextInternal> *internalContentContext;
@property (nonatomic, readonly) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) bool isPrivateDataEncryptionEnabled;
@property (nonatomic, readonly) bool isPrivateDatabaseOnline;
@property (nonatomic, readonly) bool isPrivateDatabaseStartingUp;
@property (nonatomic, readonly) bool isPrivateDatabaseTemporarilySuspended;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) FCNotificationController *notificationController;
@property (nonatomic, readonly) FCCommandQueue *notificationsEndpointCommandQueue;
@property (nonatomic, readonly) FCNotificationsEndpointConnection *notificationsEndpointConnection;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) <FCPPTContext> *pptContext;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, retain) <FCPrivateDataContext> *privateDataContext;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionController *subscriptionController;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCUserInfo *userInfo;
@property (nonatomic, readonly) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, retain) <FCWebArchiveSource> *webArchiveSource;

+ (void)initialize;
+ (id)testingContext;
+ (id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)appActivityMonitor;
- (id)appConfigurationManager;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetManager;
- (id)backgroundTaskable;
- (id)configurationManager;
- (id)contentContext;
- (id)contentDirectory;
- (id)contentEnvironmentToken;
- (id)contentStoreFrontID;
- (bool)deviceIsiPad;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)endpointCommandQueue;
- (id)endpointConnection;
- (id)feedManager;
- (id)feedPersonalizer;
- (id)fetchEndOfArticleDataForHeadline:(id)arg1 initialRelatedHeadlineCount:(unsigned long long)arg2 initialPublisherHeadlineCount:(unsigned long long)arg3 totalRelatedHeadlineCount:(unsigned long long)arg4 totalPublisherHeadlineCount:(unsigned long long)arg5 fetchRelatedHeadline:(bool)arg6 fetchPublisherHeadlines:(bool)arg7 fetchAllTopics:(bool)arg8 screenScale:(double)arg9 completion:(id /* block */)arg10;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (id)flintHelper;
- (id)flintResourceManager;
- (id)init;
- (id)initForTesting;
- (id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(bool)arg10 deviceIsiPad:(bool)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)insertTestArticle;
- (id)insertTestArticlesWithCount:(unsigned long long)arg1;
- (id)internalContentContext;
- (id)internalPrivateDataContext;
- (bool)isPrivateDataEncryptionEnabled;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isPrivateDatabaseOnline;
- (bool)isPrivateDatabaseStartingUp;
- (bool)isPrivateDatabaseTemporarilySuspended;
- (id)networkBehaviorMonitor;
- (id)news_core_ConfigurationManager;
- (id)notificationController;
- (id)notificationsController;
- (id)notificationsEndpointCommandQueue;
- (id)notificationsEndpointConnection;
- (id)personalizationData;
- (id)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id)privateChannelMembershipController;
- (id)privateDataContext;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)purchaseController;
- (id)readingHistory;
- (id)readingList;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (void)setAppActivityMonitor:(id)arg1;
- (void)setBackgroundTaskable:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFlintHelper:(id)arg1;
- (void)setPrivateDataContext:(id)arg1;
- (void)setWebArchiveSource:(id)arg1;
- (id)subscriptionController;
- (id)subscriptionList;
- (id)supportedContentStoreFrontID;
- (id)tagController;
- (id)tagSettings;
- (id)userInfo;
- (id)webArchiveCacheDirectoryURL;
- (id)webArchiveSource;

@end
