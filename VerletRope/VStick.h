//
//  VStick.h
//
//  Copyright (c) 2013 Nikhil Paranjape
//

#import <Foundation/Foundation.h>
#import "VPoint.h"

@interface VStick : NSObject {
	VPoint *pointA;
	VPoint *pointB;
	float hypotenuse;
}
-(id)initWith:(VPoint*)argA pointb:(VPoint*)argB;
-(void)contract;
-(VPoint*)getPointA;
-(VPoint*)getPointB;
@end
