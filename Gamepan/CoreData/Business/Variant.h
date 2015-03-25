//
//  Variant.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Game.h"

@class Game;

@interface Variant : Game

@property (nonatomic, retain) Game *variantOf;

@end
