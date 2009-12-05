//
//  PBIconAndTextCell.h
//  GitX
//
//  Created by Ciarán Walsh on 23/09/2008.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PBIconAndTextCell : NSTextFieldCell
{
    NSImage *image;
    BOOL mouseDownInButton;
    BOOL mouseHoveredInButton;
}
@property (retain) NSImage *image;

- (void)drawWithFrame:(NSRect)cellFrame inView:(NSView *)controlView;
- (NSSize)cellSize;
@end
