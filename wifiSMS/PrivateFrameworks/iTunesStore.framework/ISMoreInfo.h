/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISMoreInfo : ISItemInfo <NSCopying>
{
    unsigned int _reloadWholePage : 1;
    NSUInteger _totalCount;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2;
- (BOOL)shouldReloadWholePage;
- (NSUInteger)totalCount;

@end
