//
//  Theme.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface Theme : NSManagedObject

@property (nonatomic, retain) NSString * themeName;
@property (nonatomic, retain) NSSet *giveTheme;
@end

@interface Theme (CoreDataGeneratedAccessors)

- (void)addGiveThemeObject:(Game *)value;
- (void)removeGiveThemeObject:(Game *)value;
- (void)addGiveTheme:(NSSet *)values;
- (void)removeGiveTheme:(NSSet *)values;

@end
