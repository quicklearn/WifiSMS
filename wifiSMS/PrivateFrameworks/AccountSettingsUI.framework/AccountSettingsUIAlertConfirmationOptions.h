/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSString;



@interface AccountSettingsUIAlertConfirmationOptions : NSObject 
{
    NSInteger _selectedButtonIndex;
    NSInteger _keepDataButtonIndex;
    NSInteger _mergeDataButtonIndex;
    NSInteger _deleteDataButtonIndex;
    NSInteger _cancelButtonIndex;
    NSString *_dataclass;
    BOOL _enableAction;
    NSString *_tag;
}

+ (BOOL)isEnableAction:(id)arg1;
+ (BOOL)isNonDestructiveAction:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setDataclass:(id)arg1;
- (void)setIsEnableAction:(BOOL)arg1;
- (BOOL)userCancelled;
- (BOOL)userChoiceWillDeleteData;
- (id)userAction;
- (void)setupButtonIndexesForActions:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;

@end
