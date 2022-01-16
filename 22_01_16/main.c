#define _CRT_SECURE_NO_WARNINGS 10
#include <stdio.h>
#include <string.h>


//  枚举变量
enum Sex
{
	MALE = 1,
	FEMALE = 2,
	SECRET = 3
} sex;

//int sum()
//{
// 	printf("请输入数字！\n");
//	int a = 12, b = 22;
//	//scanf_s("%d%d",&a,&b);
//	return a + b;
//}

#define MAX_NUM 20

int main()
{
	//char str = "H";
	//int age = 24;
	//float fl = 24.23;
	//printf("char str:", str, "\n");

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//int result = 0;
	//result = sum();
	//printf("%d\n\n", age);
	//printf("%c\n\n", str);
	//printf("%lf\n\n", fl);
	//printf("result %d\n\n", result);

	/*int arr[MAX_NUM] = { 10 };
	printf("%d , %d\n\n", arr[1], MAX_NUM);
	
	printf("MALE %d \n", MALE);
	printf("FEMALE %d \n", FEMALE);
	printf("SECRET %d \n", SECRET);


	for (sex = MALE; sex <= SECRET;sex++) {
		printf("sex枚举元素 %d \n\n", sex);
	}*/
	

	// 字符串末尾默认隐藏\0  没有\0会出错
	//char arr[] = "Hello";
	//char arr1[] = {'A', 'b', 'c', '\0'};
	//char arr2[] = {'A', 'b', 'c'};

	//printf("arr % s \n\n", arr);
	//printf("arr1 % s \n\n", arr1);
	//printf("arr2 % s \n\n", arr2);

	//int a1 = strlen(arr);
	//int a2 = strlen(arr1);
	//int a3 = strlen(arr2);
	//printf("strlen(arr) %d \n\n", a1);
	//printf("strlen(arr1) %d \n\n", a2);
	//printf("strlen(arr2) %d \n\n", a3);





	// 转义字符
	//printf("D:\\test\\A.txt\n\n");
	//printf("D:\test\A.txt\n\n");
	//printf("AB\\nCD\n\n");
	//printf("(are you ok??) ] \n\n");
	/*printf("%s", );*/

	// 触发电脑提示 蜂鸣
	//printf("\a");


	//printf("%c\n\n",  '\x32');
	//printf("%d\n\n",  strlen("D:\test\t.txt"))

	/*
	int t = 0;
	do {
		printf("输入1会好好学习，0不想学习 \n");
		int a = 0;
		scanf_s("%d", &a);
		if (a > 0) {
			t++;
			printf("我会好好学习！ 分数：%d\n", t);
		}
		else {
			t--;
			printf("我只想卖地瓜！ 分数：%d\n", t);
		}
	} while (t < 10);
	printf("T的最终分数！ 分数：%d\n", t);

	for (int i = 0; i < t; i++) {
		printf("循环第 %d 遍,我的分数是%d\n", i + 1, t);
	}
	*/

	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char str[5] = "AB";
	printf("%d \n", arr[1]);
	printf("521 %d \n", 521 >> 2);
	*/

	/*
	char a[] = "hello";
	int b = 43;
	printf("%d \n", sizeof a);
	printf("%d \n", sizeof b);
	*/

	return 999;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
