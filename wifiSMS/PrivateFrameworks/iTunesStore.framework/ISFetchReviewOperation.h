/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISReview, NSURL;



@interface ISFetchReviewOperation : ISOperation 
{
    NSInteger _assetType;
    BOOL _backgroundReview;
    unsigned long long _itemIdentifier;
    NSUInteger _softwareVersionIdentifier;
    ISReview *_review;
    NSURL *_url;
}

@property(retain) NSURL *url; /* unknown property attribute: V_url */
@property NSUInteger softwareVersionIdentifier; /* unknown property attribute: V_softwareVersionIdentifier */
@property(retain) ISReview *review; /* unknown property attribute: V_review */
@property unsigned long long itemIdentifier; /* unknown property attribute: V_itemIdentifier */
@property(getter=isBackgroundReview) BOOL backgroundReview; /* unknown property attribute: V_backgroundReview */
@property NSInteger assetType; /* unknown property attribute: V_assetType */


- (void)dealloc;
- (void)run;
- (void)_fetchReviewInformation;
- (id)url;
- (void)setUrl:(id)arg1;
- (NSUInteger)softwareVersionIdentifier;
- (void)setSoftwareVersionIdentifier:(NSUInteger)arg1;
- (id)review;
- (void)setReview:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (BOOL)isBackgroundReview;
- (void)setBackgroundReview:(BOOL)arg1;
- (NSInteger)assetType;
- (void)setAssetType:(NSInteger)arg1;

@end
