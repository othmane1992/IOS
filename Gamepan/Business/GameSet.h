//
//  GameSet.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Game.h"

@interface GameSet : NSObject

// ===== PROPERTIES =====

@property (strong, nonatomic) NSMutableSet *gamelist;

// ===== METHODS =====


- (void)addGame:(Game *)game;
- (void)removeGame:(Game *)game;

@end
