//
//  VPoint.h
//
//  Copyright (c) 2013 Nikhil Paranjape
//

#import <Foundation/Foundation.h>

@interface VPoint : NSObject {
	float x,y,oldx,oldy;
}

@property(nonatomic,assign) float x;
@property(nonatomic,assign) float y;

-(void)setPos:(float)argX y:(float)argY;
-(void)update;
-(void)applyGravity:(float)dt;
- (void)applyMinY:(float)minY;

@end
