//
//  ZHNOCNode.h
//  ZHNOCParser
//
//  Created by zhn on 2019/9/12.
//  Copyright © 2019 zhn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHNOCNode : NSObject
@property (nonatomic, assign) BOOL isRoot;
+ (instancetype)ocnode;
- (id)nodePerform;
@end

NS_ASSUME_NONNULL_END
