//
//  Editor.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Editor : NSManagedObject

@property (nonatomic, retain) NSString * editorName;
@property (nonatomic, retain) NSSet *edited;
@end

@interface Editor (CoreDataGeneratedAccessors)

- (void)addEditedObject:(Edition *)value;
- (void)removeEditedObject:(Edition *)value;
- (void)addEdited:(NSSet *)values;
- (void)removeEdited:(NSSet *)values;

@end
