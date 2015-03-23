//
//  Game.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Category, Edition, Extension, Rule, Session, Theme, Variant;

@interface Game : NSManagedObject

@property (nonatomic, retain) NSString * gameAuthor;
@property (nonatomic, retain) NSDate * gameCreationDate;
@property (nonatomic, retain) NSString * gameName;
@property (nonatomic, retain) Category *categorised;
@property (nonatomic, retain) NSSet *edited;
@property (nonatomic, retain) NSSet *gameSession;
@property (nonatomic, retain) Theme *gameTheme;
@property (nonatomic, retain) Rule *isRegulated;
@property (nonatomic, retain) NSSet *isExtended;
@property (nonatomic, retain) NSSet *isVarianted;
@end

@interface Game (CoreDataGeneratedAccessors)

- (void)addEditedObject:(Edition *)value;
- (void)removeEditedObject:(Edition *)value;
- (void)addEdited:(NSSet *)values;
- (void)removeEdited:(NSSet *)values;

- (void)addGameSessionObject:(Session *)value;
- (void)removeGameSessionObject:(Session *)value;
- (void)addGameSession:(NSSet *)values;
- (void)removeGameSession:(NSSet *)values;

- (void)addIsExtendedObject:(Extension *)value;
- (void)removeIsExtendedObject:(Extension *)value;
- (void)addIsExtended:(NSSet *)values;
- (void)removeIsExtended:(NSSet *)values;

- (void)addIsVariantedObject:(Variant *)value;
- (void)removeIsVariantedObject:(Variant *)value;
- (void)addIsVarianted:(NSSet *)values;
- (void)removeIsVarianted:(NSSet *)values;

@end
