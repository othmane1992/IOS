//
//  Edition.h
//  Ludotheque
//
//  Created by Othmane El-kouahy on 23/03/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Author, Game, Illustrator, Language, Level;

@interface Edition : NSManagedObject

@property (nonatomic, retain) NSString * editionName;
@property (nonatomic, retain) Author *author;
@property (nonatomic, retain) Illustrator *illustrator;
@property (nonatomic, retain) Game *relatedGame;
@property (nonatomic, retain) Language *spokenLanguage;
@property (nonatomic, retain) Level *theLevel;

@end
