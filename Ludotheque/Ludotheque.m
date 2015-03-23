//
//  Ludotheque.m
//  Ludotheque
//
//  Created by Babacar-sobel Thiaw on 04/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import "Ludotheque.h"

@implementation Ludotheque


- (id)initWithName:(NSString*)aName
{
    self.Listedejeux = nil;
    if (self) {
        self->_nom = aName;
    }
    return self;
}

- (id)initWithName:(NSString*)aName andliste: (NSMutableSet*) liste
{
    self.Listedejeux = liste;
    if (self) {
        self->_nom = aName;
    }
    return self;
}

-(void) addToLudotheque: (Game*) jeu{
    [self.Listedejeux addObject:jeu];
}
@end
