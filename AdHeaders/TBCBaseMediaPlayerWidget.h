//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBCMediaPlayerAppMonitorDelegate.h"
#import "TBCMediaPlayerDelegate.h"
#import "TBControlOverlayViewDelegate.h"

@class NSMutableDictionary, NSString, TBCBaseMpControlOverlayView, TBCImageView, TBCMediaPlayer, TBCMediaPlayerCommonItem, TBCMediaPlayerContainerView, UIViewController;

@interface TBCBaseMediaPlayerWidget : UIView <TBCMediaPlayerDelegate, TBControlOverlayViewDelegate, TBCMediaPlayerAppMonitorDelegate>
{
    _Bool _showVideoBottomProgressBar;
    _Bool _isRecycle;
    _Bool _ignoreNetType2Play;
    _Bool _isManualPaused;
    _Bool _canRotating;
    _Bool _supportOriginalChange;
    UIViewController *_superViewController;
    id <TBCBaseMediaPlayerStatisticDelegate> _statisticDelegate;
    id <TBCBaseMediaPlayerControlDelegate> _controlDelegate;
    TBCBaseMpControlOverlayView *_mpFinishOverlayView;
    TBCMediaPlayerCommonItem *_mpItem;
    TBCMediaPlayer *_mediaPlayer;
    TBCImageView *_mpBkgImageView;
    UIView *_mpForegroundView;
    TBCMediaPlayerContainerView *_playerContainerView;
    id <TBCVideoViewDelegate> _delegate;
    id <TBCVideoViewProgressBarDelegate> _progressBarDelegate;
    id <TBCVideoViewPlayNextDelegate> _playNextDelegate;
    double _width;
    double _height;
    double _playerWidth;
    double _playerHeight;
    NSString *_objType;
    NSString *_tid;
    NSString *_fid;
    long long _objLocate;
    NSString *_obj_source;
    NSString *_obj_param1;
    NSString *_obj_param2;
    NSString *_uid;
    NSString *_obj_id;
    NSString *_obj_param3;
    NSString *_isVertical;
    NSMutableDictionary *_extraParaDict;
    long long _overlayType;
    double _timePeriodForCallback;
}

+ (Class)videoViewType;
- (void).cxx_destruct;
- (_Bool)addAssetAuthorityRules:(id)arg1;
- (void)addMediaPlayerToContrainerView;
- (void)addSubViewAtOverlayView:(id)arg1;
- (void)appEnterBackgroundMonitor;
- (void)appEnterForegroundMonitor;
- (void)appInterruptBegin;
- (void)appInterruptEnd;
- (void)autoPlay;
- (void)bindAssetWithUrl:(id)arg1;
- (void)bindData:(id)arg1;
- (void)bindMediaPlayer:(id)arg1;
- (void)bindVideoInfoData:(id)arg1;
- (void)bindVideoInfoDic:(id)arg1;
- (void)canclePreload;
@property(nonatomic) __weak id <TBCBaseMediaPlayerControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (id)currentOverlayView:(struct CGRect)arg1 overlayerViewType:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <TBCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceRotateMonitor;
- (void)dismissPlayer;
- (void)dismissVideo;
- (void)duplicatedRequestWithUrl:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *extraParaDict; // @synthesize extraParaDict=_extraParaDict;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=_fid;
- (void)forcePause;
- (void)forcePlay;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool ignoreNetType2Play; // @synthesize ignoreNetType2Play=_ignoreNetType2Play;
- (id)initWithFrame:(struct CGRect)arg1 overlayViewType:(long long)arg2 timePeriodForCallback:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withPlayerFrame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withPlayerFrame:(struct CGRect)arg2 overlayViewType:(long long)arg3 timePeriodForCallback:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withPlayerFrame:(struct CGRect)arg2 withExistPlayer:(id)arg3 overlayViewType:(long long)arg4 timePeriodForCallback:(double)arg5;
- (id)initWithPlayer:(id)arg1 frame:(struct CGRect)arg2 overlayViewType:(long long)arg3 timePeriodForCallback:(double)arg4;
@property(nonatomic, getter=isCanRotating) _Bool canRotating; // @synthesize canRotating=_canRotating;
- (_Bool)isEnoughDataForPlaying;
@property(readonly, nonatomic) _Bool isForceRotate;
- (_Bool)isLoading;
@property(nonatomic) _Bool isManualPaused; // @synthesize isManualPaused=_isManualPaused;
- (_Bool)isPlaying;
- (_Bool)isProgressBarShow;
- (_Bool)isReady;
@property(nonatomic) _Bool isRecycle; // @synthesize isRecycle=_isRecycle;
@property(nonatomic, getter=isShowVideoBottomProgressBar) _Bool showVideoBottomProgressBar; // @synthesize showVideoBottomProgressBar=_showVideoBottomProgressBar;
@property(nonatomic, getter=isSupportOriginalChange) _Bool supportOriginalChange; // @synthesize supportOriginalChange=_supportOriginalChange;
@property(copy, nonatomic) NSString *isVertical; // @synthesize isVertical=_isVertical;
@property(retain, nonatomic) TBCMediaPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(retain, nonatomic) TBCImageView *mpBkgImageView; // @synthesize mpBkgImageView=_mpBkgImageView;
@property(retain, nonatomic) TBCBaseMpControlOverlayView *mpFinishOverlayView; // @synthesize mpFinishOverlayView=_mpFinishOverlayView;
@property(retain, nonatomic) UIView *mpForegroundView; // @synthesize mpForegroundView=_mpForegroundView;
@property(retain, nonatomic) TBCMediaPlayerCommonItem *mpItem; // @synthesize mpItem=_mpItem;
- (void)mute:(_Bool)arg1;
@property(nonatomic) long long objLocate; // @synthesize objLocate=_objLocate;
@property(copy, nonatomic) NSString *objType; // @synthesize objType=_objType;
@property(copy, nonatomic) NSString *obj_id; // @synthesize obj_id=_obj_id;
@property(copy, nonatomic) NSString *obj_param1; // @synthesize obj_param1=_obj_param1;
@property(copy, nonatomic) NSString *obj_param2; // @synthesize obj_param2=_obj_param2;
@property(copy, nonatomic) NSString *obj_param3; // @synthesize obj_param3=_obj_param3;
@property(copy, nonatomic) NSString *obj_source; // @synthesize obj_source=_obj_source;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (void)pause;
- (void)play;
@property(nonatomic) __weak id <TBCVideoViewPlayNextDelegate> playNextDelegate; // @synthesize playNextDelegate=_playNextDelegate;
- (void)playReadyForDisplay;
@property(retain, nonatomic) TBCMediaPlayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(nonatomic) double playerHeight; // @synthesize playerHeight=_playerHeight;
- (void)playerLoading;
- (void)playerTimerObserver:(int)arg1;
- (void)playerWidgetDidAppear;
- (void)playerWidgetDidDisappear;
- (void)playerWidgetDidLoad;
- (_Bool)playerWidgetForceRotate;
- (_Bool)playerWidgetIsFullScreen;
- (void)playerWidgetUpdateProgress:(double)arg1;
- (void)playerWidgetWillAppear;
- (void)playerWidgetWillDisappear;
@property(nonatomic) double playerWidth; // @synthesize playerWidth=_playerWidth;
@property(nonatomic) __weak id <TBCVideoViewProgressBarDelegate> progressBarDelegate; // @synthesize progressBarDelegate=_progressBarDelegate;
- (void)refreshPlayingStatus;
- (void)releaseDelegate;
- (void)removeMediaPlayerFromContrainerView;
- (void)requireDelegate;
- (void)resetAudioVisualizerHidden:(_Bool)arg1;
- (void)resetBackgroundImage:(id)arg1;
- (void)resetColorForVideoView;
- (void)resetMediaPlayerForReuse;
- (void)resizeWidgetFrame:(struct CGRect)arg1;
- (void)resizeWidgetFrame:(struct CGRect)arg1 playerFrame:(struct CGRect)arg2;
- (void)resume;
- (void)resumePlayer;
@property(nonatomic) __weak id <TBCBaseMediaPlayerStatisticDelegate> statisticDelegate; // @synthesize statisticDelegate=_statisticDelegate;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) double timePeriodForCallback; // @synthesize timePeriodForCallback=_timePeriodForCallback;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) double width; // @synthesize width=_width;
- (void)setupSubviews;
- (void)showPlayButtonOfControlOverlayView:(_Bool)arg1;
- (void)showProgressBar:(_Bool)arg1 ofSimple:(_Bool)arg2;
- (void)startAutoPlay;
- (void)stop;
- (void)synchronizedWidgetStatus;
- (void)videoAssetLoadFailed:(id)arg1;
- (void)videoAssetLoaded;
- (void)videoLoaded;
- (void)videoPlayFinished;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
