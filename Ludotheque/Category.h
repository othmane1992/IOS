//
//  Category.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface Category : NSManagedObject

@property (nonatomic, retain) NSString * categoryName;
@property (nonatomic, retain) NSSet *giveCategory;
@end

@interface Category (CoreDataGeneratedAccessors)

- (void)addGiveCategoryObject:(Game *)value;
- (void)removeGiveCategoryObject:(Game *)value;
- (void)addGiveCategory:(NSSet *)values;
- (void)removeGiveCategory:(NSSet *)values;

@end
