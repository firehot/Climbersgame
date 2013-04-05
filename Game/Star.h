/*
 * Climbers
 * Copyright (c) 2013 Nikhil Paranjape
 *
 */

#import "cocos2d.h"

@interface Star : CCSprite {
    BOOL collected;
}
@property(assign) BOOL collected;
- (id)initWithPosition:(CGPoint)pos;
@end
