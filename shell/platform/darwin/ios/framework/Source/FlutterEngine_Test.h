// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import "flutter/shell/platform/darwin/ios/framework/Headers/FlutterEngine.h"

@class FlutterBinaryMessengerRelay;

// Category to add test-only visibility.
@interface FlutterEngine (Test) <FlutterBinaryMessenger>
- (void)setBinaryMessenger:(FlutterBinaryMessengerRelay*)binaryMessenger;
- (void)waitForFirstFrame:(NSTimeInterval)timeout callback:(void (^)(BOOL didTimeout))callback;
@end
