//
//  GameSet.m
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import "GameSet.h"

#import <Foundation/Foundation.h>
#import "Game+DataModel.h"
@implementation GameSet

- (id)initWithName:(NSString*)aName
{
    self.gamelist = nil;
    return self;
}

- (id)initWithName:(NSString*)aName andliste: (NSMutableSet*) liste
{
    self.gamelist = liste;
    return self;
}



-(void)addGame:(Game *)game
{
    [_gamelist addObject:game];
}

-(void)removeGame:(Game *)game
{
    [_gamelist removeObject:game];
}

@end
