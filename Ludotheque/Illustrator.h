//
//  Illustrator.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Illustrator : NSManagedObject

@property (nonatomic, retain) NSString * illustratorName;
@property (nonatomic, retain) NSSet *illustrate;
@end

@interface Illustrator (CoreDataGeneratedAccessors)

- (void)addIllustrateObject:(Edition *)value;
- (void)removeIllustrateObject:(Edition *)value;
- (void)addIllustrate:(NSSet *)values;
- (void)removeIllustrate:(NSSet *)values;

@end
