//
//  RMDocument.h
//  RaiseMan
//
//  Created by Arun Agrawal on 09/11/13.
//  Copyright (c) 2013 Arun Agrawal. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RMDocument : NSDocument {
    NSMutableArray *employees;
    
}

-(void)setEmployees:(NSMutableArray *)a;

@end
