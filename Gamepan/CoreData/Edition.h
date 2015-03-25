//
//  Edition.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Author, Editor, Game, Language, Level;

@interface Edition : NSManagedObject

@property (nonatomic, retain) NSString * editionName;
@property (nonatomic, retain) Author *author;
@property (nonatomic, retain) Editor *editor;
@property (nonatomic, retain) Author *illustrator;
@property (nonatomic, retain) Game *relatedGame;
@property (nonatomic, retain) Language *spokenLanguage;
@property (nonatomic, retain) Level *theLevel;

@end
