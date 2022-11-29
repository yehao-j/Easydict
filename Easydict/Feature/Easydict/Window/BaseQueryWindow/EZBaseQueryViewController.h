//
//  MainTabViewController.h
//  Bob
//
//  Created by tisfeng on 2022/11/3.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EZLayoutManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZBaseQueryViewController : NSViewController

@property (nonatomic, assign) EZWindowType windowType;
@property (nonatomic, weak) EZBaseQueryWindow *window;

@property (nonatomic, copy) void (^resizeWindowBlock)(void);

- (instancetype)initWithWindowType:(EZWindowType)type;

- (void)queryText:(NSString *)text;
- (void)queryWithImage:(NSImage *)image;
- (void)retry;

- (void)resetTableView:(void (^)(void))completion;
- (void)focusInputTextView;

@end

NS_ASSUME_NONNULL_END
