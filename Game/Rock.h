/*
 * Climbers
 * Copyright (c) 2013 Nikhil Paranjape
 *
 */

#import "cocos2d.h"

@interface Rock : CCSprite {
	CGPoint velocity;
	BOOL falling;
}
@property(nonatomic,assign) CGPoint velocity;
@property(nonatomic,assign) BOOL falling;
- (id)initWithPosition:(CGPoint)pos;
- (void)update:(ccTime)dt;
@end
