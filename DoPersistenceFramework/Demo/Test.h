//
//  Test.h
//  DoPersistenceFramework
//
//  Created by Ju on 14/10/27.
//  Copyright (c) 2014年 scics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DPDBObject.h"
@interface Test : DPDBObject

@property (nonatomic,strong) NSString *str;
@property (nonatomic,strong) NSArray  *arr;
@property (nonatomic,strong) NSMutableArray *mArr;
@property (nonatomic,strong) NSDictionary *dic;
@property (nonatomic,strong) NSMutableArray *mDic;
@property (nonatomic)        NSInteger    aNumber;
@property (nonatomic)        int          aInt;
@property (nonatomic)        float        aFloat;
@property (nonatomic)        double       aDouble;


@end
