//
//  UploadImageManager.h
//  Dongdaemun
//
//  Created by 刘伟 on 15/7/15.
//  Copyright (c) 2015年 sure. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UploadImageManager : NSObject

@property (nonatomic,assign) BOOL showProgressHUD;

//多张图片上传完成
@property (nonatomic,copy) void (^completion)(UploadImageManager *uploadImageManager,NSArray *urlAry);
//完成一张回调一张的url和原始的图片
@property (nonatomic,copy) void (^success)(UploadImageManager *uploadImageManager, UIImage *uploadImage,NSString *successUrl);

/**
 *  多张图片上传
 *
 *  @param imageAry 图片数组
 */
- (void)uploadImagesToHttpSeverWithImageAry:(NSArray *)imageAry;

/**
 *  单张图片上传
 *
 *  @param image 图片
 */
- (void)uploadImagesToHttpSeverWithImage:(UIImage *)image;

//图片等比处理
+ (UIImage *)imageCompressionRatio:(UIImage *)image;

@end
