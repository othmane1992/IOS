//
//  ThemeSet.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Theme+DataModel.h"

@interface ThemeSet : NSObject

@property (strong, nonatomic) NSMutableOrderedSet *list;

// ===== METHODS =====

- (void)addType:(Theme *)theme;
- (void)removeType:(Theme *)theme;

@end
