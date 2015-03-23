//
//  LudothequeTests.m
//  LudothequeTests
//
//  Created by Babacar-sobel Thiaw on 04/02/2015.
//  Copyright (c) 2015 Babacar Thiaw and Othmane El Kouahy. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "Game.h"
#import "Ludotheque.h"

@interface LudothequeTests : XCTestCase

@end

@implementation LudothequeTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    XCTFail(@"No implementation for \"%s\"", __PRETTY_FUNCTION__);
}

- (void)testGameInit {
    Game* agame = [[Game alloc]initWithName:@"Uno"];
    XCTAssertNotNil(agame, @"Game init failed");
    XCTAssertEqualObjects(agame.nom, @"Uno", "Error: bad name");
}

- (void)testLudoInit {
    Ludotheque* ludo = [[Ludotheque alloc] initWithName:@"lu"];
    XCTAssertNotNil(ludo, @"Ludo init failed");
    XCTAssertEqualObjects(ludo.nom, @"lu", "Error: bad name");
}


- (void)testLudoAddGame {
    Game* agame = [[Game alloc]initWithName:@"Uno"];
    NSMutableSet* liste = [[NSMutableSet alloc]init];
    Ludotheque* ludo = [[Ludotheque alloc] initWithName: @"lu" andliste : liste];
    [ludo addToLudotheque: agame];
    int taille = [ludo.Listedejeux count];
    int attendu = 1;
    XCTAssertEqual(taille,attendu,"Error : values are not equal");
}



@end
