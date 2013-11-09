//
//  Person.m
//  RaiseMan
//
//  Created by Arun Agrawal on 09/11/13.
//  Copyright (c) 2013 Arun Agrawal. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize personName;
@synthesize expectedRaise;

-(id)init
{
    self = [super init];
    if (self) {
        expectedRaise = 0.5;
        personName = @"New Person";
    }
    
    return self;
}
@end
