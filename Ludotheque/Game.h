//
//  Game.h
//  Ludotheque
//
//  Created by Babacar-sobel Thiaw on 04/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Game : NSObject

@property NSString *nom;
@property NSString *description;

- (id)initWithName:(NSString*)aName;
- (id)initWithName:(NSString*)aName andDesc:(NSString*)description;

@end
