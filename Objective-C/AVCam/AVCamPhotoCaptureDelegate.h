/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Provides the header for the photo capture delegate.
*/

@import AVFoundation;

@interface AVCamPhotoCaptureDelegate : NSObject<AVCapturePhotoCaptureDelegate>

- (instancetype)initWithRequestedPhotoSettings:(AVCapturePhotoSettings *)requestedPhotoSettings willCapturePhotoAnimation:(void (^)(void))willCapturePhotoAnimation livePhotoCaptureHandler:(void (^)( BOOL capturing ))livePhotoCaptureHandler completionHandler:(void (^)( AVCamPhotoCaptureDelegate *photoCaptureDelegate ))completionHandler;

@property (nonatomic, readonly) AVCapturePhotoSettings *requestedPhotoSettings;

@end
