/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class SBAwayBulletinListView;

@interface SBAwayBulletinGrabberView : SBUnknownSuperclass {
	BOOL _tracking;	// 46 = 0x2e
	float _centerDelta;	// 48 = 0x30
	SBAwayBulletinListView *_listView;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame andView:(id)view;	// 0x190365
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x1904c5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x1903ad
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x18d1d1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x18d205
@end