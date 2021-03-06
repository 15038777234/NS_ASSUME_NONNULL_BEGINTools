//
//  SelectXcodeTemplteDictionaryChannel.h
//  ADDNS_ASSUME_NONNULL_BEGIN_END
//
//  Created by 张行 on 16/4/28.
//  Copyright © 2016年 张行. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SelectXcodeTemplteDictionaryChannel;

@protocol SelectXcodeTemplteDictionaryChannelDelegate;

@interface SelectXcodeTemplteDictionaryChannel : NSOpenPanel

@property (nonatomic, weak) id <SelectXcodeTemplteDictionaryChannelDelegate> selectXcodeTemplteDelegate;

+(instancetype)xcodeTemplteModel;

@end

@protocol SelectXcodeTemplteDictionaryChannelDelegate <NSObject>

-(void)didSelectXcodeTemplteURLWithChannel:(SelectXcodeTemplteDictionaryChannel *)channel;


@end
