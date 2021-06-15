//
//  MJNet.h
//  MJNetUtils
//
//  Created by WCQ on 2021/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJNet : NSObject

/**
*    单例
*/
+ (instancetype)shared;


/// leancloud
/// @param lcId X-LC-Id
/// @param lcKey X-LC-Key
/// @param lcUrl url
/// @param complete result
- (void)leanStatr:(NSString *)lcId
            lcKey:(NSString *)lcKey
            lcUrl:(NSString *)lcUrl
         complete:(nullable void (^)(NSDictionary *result, NSError * _Nullable error))complete;

@end

NS_ASSUME_NONNULL_END
