//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTLaunchServiceHacks : NSObject
{
}

+ (long)LSCopyDisplayNameForRef:(id)arg1 outDisplayName:(const struct __CFString **)arg2;
+ (long)LSCopyItemInfoForRef:(id)arg1 whichInfo:(unsigned long)arg2 itemInfo:(struct LSItemInfoRecord *)arg3;
+ (long)LSSetWeakBindingForType:(unsigned long)arg1 creator:(unsigned long)arg2 extension:(id)arg3 role:(unsigned long)arg4 application:(struct FSRef *)arg5;
+ (long)LSGetStrongBindingForRef:(const struct FSRef *)arg1 outAppRef:(struct FSRef *)arg2;
+ (long)LSSetStrongBindingForRef:(const struct FSRef *)arg1 application:(struct FSRef *)arg2;
+ (id)LSCopyAllApplicationURLs;
+ (id)LSCopyApplicationURLsForItemURL:(id)arg1;

@end

