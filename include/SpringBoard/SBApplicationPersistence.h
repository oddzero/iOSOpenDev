/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableDictionary;

@interface SBApplicationPersistence : SBUnknownSuperclass {
	NSMutableDictionary *_state;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	dispatch_queue_s *_stateQueue;	// 12 = 0xc
	dispatch_queue_s *_writeQueue;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x1118d1
+ (id)_statePath;	// 0x111891
+ (void)migrateSystemLocalNotifications;	// 0x1116c5
- (id)init;	// 0x111605
- (id)valueForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;	// 0x111f75
- (void)setValue:(id)value forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;	// 0x111edd
- (id)archivedObjectForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;	// 0x111de5
- (void)setArchivedObject:(id)object forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;	// 0x111d45
- (id)allBundleOrDisplayIdentifiersWithState;	// 0x111cb5
- (void)purgeKeysForBundleAndDisplayIdentifiersOtherThan:(id)bundleAndDisplayIdentifiersOtherThan;	// 0x111c59
- (void)flushSynchronously;	// 0x111c01
- (void)_flushSynchronously;	// 0x111a0d
- (void)_markDirty;	// 0x1118fd
@end