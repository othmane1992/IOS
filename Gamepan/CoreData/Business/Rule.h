//
//  Rule.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface Rule : NSManagedObject

@property (nonatomic, retain) NSString * ruleName;
@property (nonatomic, retain) NSNumber * ruleNumberPlayers;
@property (nonatomic, retain) NSString * ruleWinnigPrinciple;
@property (nonatomic, retain) NSSet *regulate;
@end

@interface Rule (CoreDataGeneratedAccessors)

- (void)addRegulateObject:(Game *)value;
- (void)removeRegulateObject:(Game *)value;
- (void)addRegulate:(NSSet *)values;
- (void)removeRegulate:(NSSet *)values;

@end
