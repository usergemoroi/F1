#import <UIKit/UIKit.h>
#include "Includes.h"
#import "../../API/APIClient.h"
//#import "../../AEScrypt/Hinaabil.h"
#import <AVFoundation/AVFoundation.h>
#import "JHDragView.h"
#import "JHPP.h"
#import "hook/fishhook.h"
#import "hook/hook.h"
#import "hook/patch.h"
//#import "PatchNonJB/hook_util.h"

extern bool MenDeal;
@interface ImGuiLoad()
@property (nonatomic, assign) float currentVolum;
@property (strong, nonatomic) NSTimer * timer;
@property (nonatomic, strong) ImGuiDrawView *vna;
@end


@implementation ImGuiLoad
UIWindow *mainWindow;
static UIImageView*iconImageView;

+ (void)load
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        
      //APIClient *API = [[APIClient alloc] init];
        //[API setLanguage:@"en"];
        //[API
        // setToken:[Hinaabil dec:@"E/wPJYqBBcElgsC3Y9meCrt5x8oG+Pn5j2Sy80+hBLqqCsyQYQfA4eT0rNGTPFjhF9+S90X3qn1cA+7RVvpAqJzDyt/pOvzEjq2C6Kyx8SOIWseTo821dFmIAwhVfMbF03kcvHmFkj83LHYqoZf92Q==" ]];
        //[API paid:^{
            [[self share] initTapGes];
        
    });
}

+ (instancetype)share
{
    static ImGuiLoad *tool;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tool = [[ImGuiLoad alloc] init];
    });
    return tool;
}


-(void)initTapGes
{

 
        iconImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 40, 40)];
    
         NSData *imageData = [NSData dataWithContentsOfURL:[NSURL URLWithString:@"https://img.upanh.tv/2025/05/21/ravenios.png"]];
            UIImage *decodedImage = [UIImage imageWithData:imageData];
        UIPanGestureRecognizer *panGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePan:)];
[iconImageView addGestureRecognizer:panGesture];
        UIImage *image = [UIImage imageWithData:imageData];
        CGFloat cornerRadius = iconImageView.frame.size.width / 2.0;
iconImageView.layer.cornerRadius = cornerRadius;

// 4. Clip the image to fit within the rounded corners (optional)
iconImageView.layer.masksToBounds = YES;
        iconImageView.image = image;
        iconImageView.userInteractionEnabled = YES;

    [[UIApplication sharedApplication].keyWindow addSubview:iconImageView];
        [iconImageView addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(show)]];
    //[tap addTarget:self action:@selector(show)];
        if (!_vna) {
        ImGuiDrawView *vc = [[ImGuiDrawView alloc] init];
        _vna = vc;
        //Settings::Tab = 1;
    }
    if(MenDeal==true)MenDeal=false;
    else {
        MenDeal=true;
        [[UIApplication sharedApplication].windows[0].rootViewController.view addSubview:_vna.view];}


 //  }];
    

  
}
- (void)handlePan:(UIPanGestureRecognizer *)gesture {
    CGPoint translation = [gesture translationInView:iconImageView.superview];
    CGPoint newCenter = CGPointMake(iconImageView.center.x + translation.x, iconImageView.center.y + translation.y);
    
    // Kiểm tra nếu vị trí mới của iconImageView sẽ tràn ra khỏi màn hình
    CGRect superviewBounds = iconImageView.superview.bounds;
    CGFloat halfIconWidth = iconImageView.bounds.size.width / 2.0;
    CGFloat halfIconHeight = iconImageView.bounds.size.height / 2.0;
    
    CGFloat minX = halfIconWidth;
    CGFloat maxX = superviewBounds.size.width - halfIconWidth;
    CGFloat minY = halfIconHeight;
    CGFloat maxY = superviewBounds.size.height - halfIconHeight;
    
    newCenter.x = MAX(minX, MIN(newCenter.x, maxX));
    newCenter.y = MAX(minY, MIN(newCenter.y, maxY));
    
    iconImageView.center = newCenter;
    [gesture setTranslation:CGPointZero inView:iconImageView.superview];
}
- (void)show
{
    if (!_vna) {
        ImGuiDrawView *vc = [[ImGuiDrawView alloc] init];
        _vna = vc;
        //Settings::Tab = 1;
    }
    if(MenDeal==true)MenDeal=false;
    else {
        MenDeal=true;
        [[UIApplication sharedApplication].windows[0].rootViewController.view addSubview:_vna.view];}
    
}




@end
