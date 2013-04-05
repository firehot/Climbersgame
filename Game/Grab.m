/*
 * Climbers
 * 
 * Copyright (c) 2013 Nikhil Paranjape
 *
 */

#import "Grab.h"

@implementation Grab

- (id)initWithPosition:(CGPoint)pos {
	if((self = [super initWithSpriteFrameName:@"grab.png"])) {
		self.position = pos;
	}
	return self;
}

@end
