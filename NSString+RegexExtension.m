//
//  NSString+RegexExtension.m
//  OCRuntime
//
//  Created by mac1 on 15/10/16.
//  Copyright © 2015年 BNDK. All rights reserved.
//

#import "NSString+RegexExtension.h"

@implementation NSString (RegexExtension)

//根据正则返回是否匹配
- (BOOL)match:(NSString *)pattern
{
    // 创建正则表达式
    NSRegularExpression *regex = [[NSRegularExpression alloc] initWithPattern:pattern options:0 error:nil];
    
    // 测试
    NSArray *results = [regex matchesInString:self options:0 range:NSMakeRange(0, self.length)];
    
    NSLog(@"字符串长度: %lu  能否匹配: %d",(unsigned long)self.length,results.count > 0);
    return results.count > 0;
}

- (BOOL)isNULL
{
   return [self match:Regex_Null];
}
- (BOOL)isNotNULL
{
   return [self match:Regex_NotNull];
}
- (BOOL)isSign
{
   return [self match:Regex_Sign];
}
- (BOOL)isAllSign
{
   return [self match:Regex_AllSign];
}
- (BOOL)isNumber
{
   return [self match:Regex_Number];
}
- (BOOL)isAllNumber
{
   return [self match:Regex_AllNumber];
}
- (BOOL)isChar
{
  return [self match:Regex_Char];
}
- (BOOL)isAllChar
{
   return [self match:Regex_AllChar];
}
- (BOOL)isChinese
{
   return [self match:Regex_China];
}
- (BOOL)isAllChinese
{
   return [self match:Regex_AllChina];
}
- (BOOL)isUserName
{
   return [self match:Regex_UserName];
}
- (BOOL)isPassword
{
   return [self match:Regex_Password];
}
- (BOOL)isCardNO
{
   return [self match:Regex_CardNO];
}
- (BOOL)isGanAoCard
{
   return [self match:Regex_GanAoCard];
}
- (BOOL)isIDCard
{
   return [self match:Regex_IDCard];
}
- (BOOL)isUrl
{
   return [self match:Regex_Url];
}
- (BOOL)isEmail
{
    return [self match:Regex_Email];
}
- (BOOL)isTelephone
{
   return [self match:Regex_Telephone];
}

- (BOOL)isQQ
{
    // 1.不能以0开头
    // 2.全部是数字
    // 3.5-11位
    return [self match:@"^[1-9]\\d{4,10}$"];
}

- (BOOL)isPhoneNumber
{
    // 1.全部是数字
    // 2.11位
    // 3.以13\15\18\17开头
    return [self match:@"^1[3578]\\d{9}$"];
}

- (BOOL)isIPAddress
{
    // 1-3个数字: 0-255
    // 1-3个数字.1-3个数字.1-3个数字.1-3个数字  注意.要用转义字符
    return [self match:@"^\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}$"];
}

- (BOOL)isBankCardNumber
{
    // 1.全是数字
    // 2.16或者19位
    // 3.以3,4,5,6开头  ,百度上搜的
    return [self match:@"^[3-6]\\d{15}$|^[3-6]\\d{18}$"];
}
- (BOOL)isPostcode
{
    return [self match:@"^[1-9]\\d{5}(?!\\d)"];
}

- (BOOL)test
{
    // 以4或u开头,任意个任意字符,以字母结尾
    return [self match:@"^4|^u.*[a-aA-Z]$"];
}

- (BOOL)test2
{
    // 以数字开头,任意个任意字符,以2个或3个a结尾
    return [self match:@"^\\d.*a{2}$|a{3}$"];
}

@end
