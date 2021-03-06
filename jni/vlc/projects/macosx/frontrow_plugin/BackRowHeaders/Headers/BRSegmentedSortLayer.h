/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRLayer.h>

@class BRImageLayer, NSArray, NSMutableArray, NSMutableDictionary;

@interface BRSegmentedSortLayer : BRLayer
{
    BRImageLayer *_leftEndCapLayer;
    NSMutableArray *_dividerLayers;
    NSMutableArray *_contentLayers;
    NSMutableArray *_textLayers;
    BRImageLayer *_rightEndCapLayer;
    NSArray *_segmentNames;
    NSMutableDictionary *_images;
    int _selectedSegment;
}

- (id)initWithSegmentNames:(id)fp8 selectedSegment:(int)fp12;
- (void)dealloc;
- (int)segmentCount;
- (void)setSelectedSegment:(int)fp8;
- (int)selectedSegment;
- (float)visualHorizontalCenter;
- (void)layoutSublayers;

@end

