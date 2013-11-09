//
//  Person.h
//  RaiseMan
//
//  Created by Arun Agrawal on 09/11/13.
//  Copyright (c) 2013 Arun Agrawal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    NSString *personName;
    float expectedRaise;
}

@property (readwrite, copy) NSString *personName;
@property (readwrite) float expectedRaise;
@end
