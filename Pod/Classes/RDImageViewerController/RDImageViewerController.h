//
//  RDImageViewerController.h
//
//  Created by Akira Matsuda on 2014/03/20.
//  Copyright (c) 2014年 Akira Matsuda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RDPagingView.h"
#import "RDImageScrollView.h"

@interface RDImageViewerController : UIViewController <RDPagingViewDelegate, UIScrollViewDelegate>
{
	RDPagingView *pagingView_;
	UIView *currentPageHud_;
	UILabel *currentPageHudLabel_;
	BOOL statusBarHidden_;
	UIImage *(^imageHandler_)(NSInteger pageIndex);
	void (^asyncImageHandler_)(RDImageScrollView *imageView, NSInteger pageIndex);
}

@property (nonatomic) NSUInteger preloadCount;
@property (nonatomic, copy) NSString *identifier;

- (instancetype)initWithImageHandler:(UIImage *(^)(NSInteger pageIndex))imageHandler numberOfImages:(NSInteger)pageCount;
- (instancetype)initWithAsynchronousImageHandler:(void (^)(RDImageScrollView *imageView, NSInteger pageIndex))asyncHandler numberOfImages:(NSInteger)pageCount;

@end
