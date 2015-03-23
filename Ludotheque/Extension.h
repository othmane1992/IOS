//
//  Extension.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Game.h"

@class Game;

@interface Extension : Game

@property (nonatomic, retain) Game *extends;

@end
