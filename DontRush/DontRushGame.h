//
//  dontRushGame.h
//  DontRush
//
//  Created by Justin Wong on 2015-05-19.
//  Copyright (c) 2015 justinSYDE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DontRushGame : NSObject
@property (nonatomic) NSInteger score;
@property (nonatomic) NSInteger highScore;
@property (nonatomic) NSMutableDictionary *collectionOfColors;
@property (nonatomic) NSMutableDictionary *collectionOfTones;
@property (nonatomic) NSMutableArray *orderedListOfColors;
@property (nonatomic) NSMutableDictionary *questionObject;
@property (nonatomic) NSInteger timeCount;
@property (nonatomic) NSInteger timeLimit;
@property (nonatomic) BOOL reverse; // if true, user swipes left to match instead of right
@property (nonatomic) BOOL toned; // if true, user plays with tones rather than with distinct
@property (nonatomic) BOOL smallCircles; // if true, user plays with smaller circles

+ (NSArray *)validColors;
+ (NSArray *)validNumberStrings;
- (void)generateColorSet;
- (void)generateToneSet;
- (void)setupNewTone;
- (NSDictionary *) generateNewQuestion;
- (BOOL)match;
- (void)updateScore;
- (BOOL)missedMatch;
@end
