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
- (void)leanStart:(NSString *)lcId
            lcKey:(NSString *)lcKey
            lcUrl:(NSString *)lcUrl
         complete:(nullable void (^)(NSDictionary *result, NSError * _Nullable error))complete;


/// mock
/// @param params 入参
/// @param url 地址
/// @param complete result
- (void)mockStart:(NSDictionary *)params
              url:(NSString *)url
         complete:(nullable void (^)(NSDictionary *result, NSError * _Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
