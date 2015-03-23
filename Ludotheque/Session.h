//
//  Session.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface Session : NSManagedObject

@property (nonatomic, retain) NSString * sessionName;
@property (nonatomic, retain) Game *giveSession;

@end
