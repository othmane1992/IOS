//
//  Author.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Author : NSManagedObject

@property (nonatomic, retain) NSString * authorName;
@property (nonatomic, retain) NSSet *wrote;
@end

@interface Author (CoreDataGeneratedAccessors)

- (void)addWroteObject:(Edition *)value;
- (void)removeWroteObject:(Edition *)value;
- (void)addWrote:(NSSet *)values;
- (void)removeWrote:(NSSet *)values;

@end
