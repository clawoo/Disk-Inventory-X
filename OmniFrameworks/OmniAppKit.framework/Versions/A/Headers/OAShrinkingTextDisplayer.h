// Copyright 2000-2005 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/tags/OmniSourceRelease/2008-09-09/OmniGroup/Frameworks/OmniAppKit/Widgets.subproj/OAShrinkingTextDisplayer.h 68913 2005-10-03 19:36:19Z kc $

#import <AppKit/NSView.h>

@class NSFont, NSString;

@interface OAShrinkingTextDisplayer : NSView
{
    NSFont *baseFont;
    NSString *string;
}

- (void)setFont:(NSFont *)font;
- (NSFont *)font;

- (void)setStringValue:(NSString *)newString;
- (NSString *)stringValue;

@end
