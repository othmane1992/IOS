//
//  Level.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Level : NSManagedObject

@property (nonatomic, retain) NSString * levelName;
@property (nonatomic, retain) NSSet *giveLevel;
@end

@interface Level (CoreDataGeneratedAccessors)

- (void)addGiveLevelObject:(Edition *)value;
- (void)removeGiveLevelObject:(Edition *)value;
- (void)addGiveLevel:(NSSet *)values;
- (void)removeGiveLevel:(NSSet *)values;

@end
