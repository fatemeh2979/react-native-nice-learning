#ifdef __cplusplus
#import "react-native-nice-learning.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNNiceLearningSpec.h"

@interface NiceLearning : NSObject <NativeNiceLearningSpec>
#else
#import <React/RCTBridgeModule.h>

@interface NiceLearning : NSObject <RCTBridgeModule>
#endif

@end
