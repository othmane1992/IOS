//
//  Language.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Edition;

@interface Language : NSManagedObject

@property (nonatomic, retain) NSString * languageName;
@property (nonatomic, retain) NSSet *giveLanguage;
@end

@interface Language (CoreDataGeneratedAccessors)

- (void)addGiveLanguageObject:(Edition *)value;
- (void)removeGiveLanguageObject:(Edition *)value;
- (void)addGiveLanguage:(NSSet *)values;
- (void)removeGiveLanguage:(NSSet *)values;

@end
