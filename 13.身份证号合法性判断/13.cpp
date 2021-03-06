/*
3.身份证号合法性判断：
题目描述：
我国身份证号为18位，前17位必为数字，最后一位可为数字或者字母X：其中前六位为地址码，即对象常住户口所在县（市，旗，区），第七至第十位为出生年份，第十一、十二位为出生月份，第十三、十四位为出生日期。那么问题来了，我们知道年份分为平年和闰年，所谓闰年就是：那些能被4整除但不能被100整除或者能被400整除的年份，我们谓之“闰年”，闰年的2月份有29天，而平年则有28天。请设计一个程序，判断一个身份证号的合法性：
（1）如果一个人的身份证合法，则返回0；
（2）如果一个人的身份证号长度不合法，则返回1；
（3）如果一个人身份证号前17位出现非数字字符，则返回2；
（4）如果一个人身份证号第18位既不是数字也不是X，则返回3；
（5）如果一个人出生年份在（1900-2017）之外，则返回4；
（6）如果一个人出生月份不合法，则返回5；
（7）如果一个人出生日期不合法，则返回6；
（其他不合法情况，考生无需考虑）
例如：
输入：						输出：
362329199411015334			0
35393099939849					1
.......................等等
*/