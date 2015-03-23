//
//  Game.m
//  Ludotheque
//
//  Created by Babacar-sobel Thiaw on 04/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import "Game.h"

@implementation Game

- (id)initWithName:(NSString*)aName
{
    return [self initWithName:aName andDesc:nil];
    
}
- (id)initWithName:(NSString*)aName andDesc:(NSString*)description
{
    self = [super init];
    if (self) {
        self->_nom = aName;
        self->_description = description;
    }
    return self;
}

@end
