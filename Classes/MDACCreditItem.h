//
//  MDACCreditItem.h
//  MDAboutController
//
//  Created by Dimitri Bouniol on 5/23/11.
//  Copyright 2012 Mochi Development Inc. All rights reserved.
//  
//  Copyright (c) 2012 Dimitri Bouniol, Mochi Development, Inc.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software, associated artwork, and documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  1. The above copyright notice and this permission notice shall be included in
//     all copies or substantial portions of the Software.
//  2. Neither the name of Mochi Development, Inc. nor the names of its
//     contributors or products may be used to endorse or promote products
//     derived from this software without specific prior written permission.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//  
//  EleMints, the EleMints Icon, Mochi Dev, and the Mochi Development logo are
//  copyright Mochi Development, Inc.
//  
//  Also, it'd be super awesome if you left in the credit line generated
//  automatically by the code that links back to this page :)
//

#import <UIKit/UIKit.h>

@interface MDACCreditItem : NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *role;
@property(nonatomic, copy) NSDictionary *userAssociations;
@property(nonatomic, strong) NSURL *link;
@property(nonatomic, copy) NSString *viewController;
@property(nonatomic, copy) NSString *identifier;

- (id)initWithName:(NSString *)aName role:(NSString *)aRole linkURL:(NSURL *)anURL; // designated initializer
- (id)initWithName:(NSString *)aName role:(NSString *)aRole linkString:(NSString *)aLink;
- (id)initWithName:(NSString *)aName role:(NSString *)aRole viewController:(NSString *)aViewController;
+ (id)itemWithName:(NSString *)aName role:(NSString *)aRole linkURL:(NSURL *)anURL;
+ (id)itemWithName:(NSString *)aName role:(NSString *)aRole linkString:(NSString *)aLink;
+ (id)itemWithName:(NSString *)aName role:(NSString *)aRole viewController:(NSString *)aViewController;
+ (id)item;
- (id)initWithDictionary:(NSDictionary *)aDict; // internal
+ (id)itemWithDictionary:(NSDictionary *)aDict; // internal

@end
