//
//  HNPhotoAlbumLayout.h
//  CollectionViewTutorial
//
//  Created by Hoang Nguyen Ngoc on 1/29/15.
//  Copyright (c) 2015 HoangNN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HNPhotoAlbumLayout : UICollectionViewLayout
@property (nonatomic) UIEdgeInsets itemInsets;
@property (nonatomic) CGSize itemSize;
@property (nonatomic) CGFloat interItemSpacingY;
@property (nonatomic) NSInteger numberOfColumns;
@end
