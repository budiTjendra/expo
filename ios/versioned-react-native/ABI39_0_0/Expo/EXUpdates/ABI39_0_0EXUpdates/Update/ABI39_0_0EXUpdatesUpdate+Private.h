//  Copyright © 2019 650 Industries. All rights reserved.

#import <ABI39_0_0EXUpdates/ABI39_0_0EXUpdatesAsset.h>
#import <ABI39_0_0EXUpdates/ABI39_0_0EXUpdatesUpdate.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABI39_0_0EXUpdatesUpdate ()

@property (nonatomic, strong, readwrite) NSUUID *updateId;
@property (nonatomic, strong, readwrite) NSDate *commitTime;
@property (nonatomic, strong, readwrite) NSString *runtimeVersion;
@property (nonatomic, strong, readwrite, nullable) NSDictionary *manifest;
@property (nonatomic, assign, readwrite) BOOL keep;
@property (nonatomic, strong, readwrite) NSURL *bundleUrl;
@property (nonatomic, strong, readwrite) NSArray<ABI39_0_0EXUpdatesAsset *> *assets;
@property (nonatomic, assign, readwrite) BOOL isDevelopmentMode;

@property (nonatomic, strong) ABI39_0_0EXUpdatesConfig *config;
@property (nonatomic, strong, nullable) ABI39_0_0EXUpdatesDatabase *database;

- (instancetype)initWithRawManifest:(NSDictionary *)manifest
                             config:(ABI39_0_0EXUpdatesConfig *)config
                           database:(nullable ABI39_0_0EXUpdatesDatabase *)database;

@end

NS_ASSUME_NONNULL_END
