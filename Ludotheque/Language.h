//
//  Language.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
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
