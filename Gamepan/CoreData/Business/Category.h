//
//  Category.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface GameCategory : NSManagedObject

@property (nonatomic, retain) NSString * categoryName;
@property (nonatomic, retain) NSSet *giveCategory;
@end

@interface GameCategory (CoreDataGeneratedAccessors)

- (void)addGiveCategoryObject:(Game *)value;
- (void)removeGiveCategoryObject:(Game *)value;
- (void)addGiveCategory:(NSSet *)values;
- (void)removeGiveCategory:(NSSet *)values;

@end
