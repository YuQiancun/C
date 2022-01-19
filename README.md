# C
This is my C
[https://cplusplus.com/]

	二分法/

# 2022/01/16 create project C

# 头文件

```
	#include "libName.h"				//静态库声明文件
	#pragma comment（lib，"*.lib"）		//引入静态库*.lib文件
```

# 基础

## 数据类型
	char		//字符数据类型
	short		//短整型
	int			//整形
	long		//长整型
	long long	//更长的整形
	float		//单精度浮点型
	double		//双精度浮点型

## 打印 格式

	%d			//整形
	%lf			//单精度浮点型
	%s			//字符串  	"ABCD"
	%c			//字符		'A'
	
	
#  操作符

```
算数操作符
+ - * / 
移位操作符
>> <<
```

# 函数
	system()				//用来执行系统命令

	strcmp(str1, str2)		//比较两个字符串
	1. 如果返回值 < 0，则表示 str1 小于 str2。
	2. 如果返回值 > 0，则表示 str2 小于 str1。
	3. 如果返回值 = 0，则表示 str1 等于 str2。
	
	sqrt()					//取平方根
	
	goto #NAME				//跳转至FlagName位置继续执行
	flag:
	goto flag
	
	getchar()/putchar()		//获取缓冲区字符/输出字符
	
	