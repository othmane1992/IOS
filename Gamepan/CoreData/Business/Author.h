//
//  Author.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Author : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSSet *wrote;
@property (nonatomic, retain) Edition *illustrated;
@end

@interface Author (CoreDataGeneratedAccessors)

- (void)addWroteObject:(Edition *)value;
- (void)removeWroteObject:(Edition *)value;
- (void)addWrote:(NSSet *)values;
- (void)removeWrote:(NSSet *)values;

@end
