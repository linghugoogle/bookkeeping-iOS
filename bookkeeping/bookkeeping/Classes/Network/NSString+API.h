/**
 * 地址
 * @author 郑业强 2018-12-21 创建文件
 */

#import <Foundation/Foundation.h>


#define KHost @"http://127.0.0.1:8080"
#define KStatic(str) [NSString stringWithFormat:@"http://127.0.0.1:8080/media/%@", str]
#define kUser  @"kUser"
#define Request(A) [NSString stringWithFormat:@"%@%@", KHost, A]



// 我的徽章列表
#define BadgeListRequest Request(@"/shayu/getBadgeRequest.action")
// 添加类别列表
#define InsertCategoryListRequest Request(@"/shayu/getInsertCategoryRequest.action")
// 添加新类别
#define AddInsertCategoryListRequest Request(@"/shayu/addInsertCategoryRequest.action")
// 记账列表
#define CategoryListRequest Request(@"/shayu/getCategoryRequest.action")
// 添加原有记账
#define AddAleardyCategoryRequest Request(@"/shayu/addAleardyCategoryRequest.action")
// 类别设置列表
#define CategorySetListRequest Request(@"/shayu/getCategorySetRequest.action")