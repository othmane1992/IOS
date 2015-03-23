//
//  Ludotheque.h
//  Ludotheque
//
//  Created by Babacar-sobel Thiaw on 04/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "game.h"

@interface Ludotheque: NSObject
@property NSString *nom;
@property NSMutableSet * Listedejeux;


-(id)initWithName:(NSString*)aName;
- (id)initWithName:(NSString*)aName andliste: (NSMutableSet*) liste;
-(void)addToLudotheque:(Game*) jeu;
@end
