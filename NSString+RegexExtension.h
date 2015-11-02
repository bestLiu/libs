//
//  NSString+RegexExtension.h
//  OCRuntime
//
//  Created by mac1 on 15/10/16.
//  Copyright © 2015年 BNDK. All rights reserved.
//


#define Regex_Null          @"/s"                       // 空字符
#define Regex_NotNull       @"/S"                       // 非空字符

#define Regex_Sign          @"^\\p{Punct}$"             // 一个符号字符
#define Regex_AllSign       @"^\\p{Punct}+$"            // 至少一个符号

#define Regex_Number        @"^\\d{1}$"                 // 一个数字字符
#define Regex_AllNumber     @"^\\d+$"                   // 至少一个数字

#define Regex_Char          @"^[A-Za-z]$"               // 一个字母字符
#define Regex_AllChar       @"^[A-Za-z]+$"              // 至少一个字母

#define Regex_China         @"^[\\u4E00-\\u9FA5]$"      // 一个中文字符
#define Regex_AllChina      @"^[\\u4E00-\\u9FA5]+$"     // 至少一个中文

// 用户账号
#define Regex_UserName      @"^[A-Za-z0-9]{6,32}$"

// 用户密码
//#define Regex_Password      @"^[A-Za-z0-9\\p{Punct}]+$"
#define Regex_Password      @"^[0-9A-Za-z]{0,18}$"

// 用户卡号
#define Regex_CardNO        @"^[A-Za-z0-9]+$"

// 港澳能行证
#define Regex_GanAoCard     @"^(H|M)\\d{10}$"

// 台胞证
#define Regex_TaiWanCard    @"^\\d{10}(\\([A-Za-z]{1}\\))|(\\(\\d{2}\\))$"

// 身份证号
#define Regex_18IDCard      @"^[1-9]\\d{5}[1-9]\\d{3}((0[1-9])|(1[0-2]))((0[1-9])|([1-2]\\d)|3[0-1])\\d{3}(\\d|X|x)$"
#define Regex_15IDCard      @"^[1-9]\\d{5}[1-9]\\d((0[1-9])|(1[0-2]))((0[1-9])|([1-2]\\d)|3[0-1])\\d{3}$"
#define Regex_IDCard        @"^([1-9]\\d{5}[1-9]\\d{3}((0[1-9])|(1[0-2]))((0[1-9])|([1-2]\\d)|3[0-1])\\d{3}(\\d|X|x))|([1-9]\\d{5}[1-9]\\d((0[1-9])|(1[0-2]))((0[1-9])|([1-2]\\d)|3[0-1])\\d{3})$"

// 网址地址
#define Regex_Url           @"http(s)?:\\/\\/([\\w-]+\\.)+[\\w-]+(\\/[\\w- .\\/?%&=]*)?"

// 电子邮件
#define Regex_Email         @"^[a-zA-Z0-9][\\w\\.-]*[a-zA-Z0-9]@[a-zA-Z0-9][\\w\\.-]*[a-zA-Z0-9]\\.[a-zA-Z][a-zA-Z\\.]*[a-zA-Z]$"

// 座机号码
#define Regex_Telephone     @"(\\(\\d{3,4}\\)|\\d{3,4}-|\\s)?\\d{6,14}"


// 移动号码段（134、135、136、137、138、139、147、150、151、152、157、158、159、182、183、187、188）
#define Regex_CMCCPhone     @"^((\\+86)|(\\+86 )|(86)|(86 ))?1(3[4-9]|47|5[012789]|8[2378])\\d{8}$"

// 联通号码段（130、131、132、155、156、185、186）
#define Regex_CUCCPhone     @"^((\\+86)|(\\+86 )|(86)|(86 ))?1(3[0-2]|5[56]|8[56])\\d{8}$"

// 电信号码段（133、153、180、189）
#define Regex_CTCCPhone     @"^((\\+86)|(\\+86 )|(86)|(86 ))?1(33|53|8[09])\\d{8}$"


#import <Foundation/Foundation.h>

@interface NSString (RegexExtension)

- (BOOL)isNULL;
- (BOOL)isNotNULL;
- (BOOL)isSign;
- (BOOL)isAllSign;
- (BOOL)isNumber;
- (BOOL)isAllNumber;
- (BOOL)isChar;
- (BOOL)isAllChar;
- (BOOL)isChinese;
- (BOOL)isAllChinese;
- (BOOL)isUserName;
- (BOOL)isPassword;
- (BOOL)isCardNO;
- (BOOL)isGanAoCard;
- (BOOL)isIDCard;
- (BOOL)isUrl;
- (BOOL)isEmail;
- (BOOL)isTelephone;

/**
 *  是否是QQ号
 */
- (BOOL)isQQ;
/**
 *  是否是手机号码
 */
- (BOOL)isPhoneNumber;
/**
 *  是否是IP地址
 */
- (BOOL)isIPAddress;
/**
 *  是否是银行卡号
 */
- (BOOL)isBankCardNumber;
/**
 *  是否是邮编
 */
- (BOOL)isPostcode;

- (BOOL)test;

- (BOOL)test2;
@end
