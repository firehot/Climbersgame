/*
 * Climbers
 * Copyright (c) 2013 Nikhil Paranjape
 *
 */

#import "Star.h"

@implementation Star

@synthesize collected;

- (id)initWithPosition:(CGPoint)pos {
	if((self = [super initWithSpriteFrameName:@"star.png"])) {
		self.position = pos;
		collected = NO;
	}
	return self;
}

@end
