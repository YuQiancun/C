//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

#include <stdio.h>
#include <time.h>



void threeGame(void);

int main() {
	srand((unsigned int) time(NULL));

	threeGame();
	return 0;
}



/*
//  枚举变量
enum Sex
{
	MALE = 1,
	FEMALE = 2,
	SECRET = 3
} sex;
*/

//int sum()
//{
// 	printf("请输入数字！\n");
//	int a = 12, b = 22;
//	//scanf_s("%d%d",&a,&b);
//	return a + b;
//}
/*
#define MAX_NUM 20

extern int add(int, int);

// 定义宏 function = { 执行语句 }   调用 = function NAME = { 执行语句 }
#define sum(int x,int y) ((x) + (y))
*/


//int main()
//{
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


	//printf("%d\n\n", add(10, 11));

//	return 999;
//}

/*

int main()
{
	int a = 10;
	printf("%p\n\n", &a);
	int* p = &a;

	printf("*p %d\n\n", *p);
	++a;
	printf("*p %d  %d\n\n", *p, a);

	--*p;

	printf("%d  %d\n\n", *p, a);


	return 0;
}

*/
//void game(int a, int b) {
//	if (a > b)
//		printf("太大了\n");
//	if (a < b)
//		printf("太小了\n");
//	if(a == b)
//		printf("恭喜刚刚好！\n");
//}

//int main(void)
//{
	/*
	char password[20] = { 0 };
	printf("%s\n", password);
	printf("请输入密码 Enter 确认！\n\n");
	scanf("%s", password);
	printf("再次确认密码 Y/N 确认！\n\n");
	//getchar();
	int ch = getchar();

	if (ch == 'Y') {
		printf("成功确认密码！");
	}else {
		printf("我要重新设置密码");
	}
	*/

	/*
	char password[20] = { 0 };
	printf("请输入密码 Enter 确认！\n\n");
	scanf("%s", password);
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		printf("%d", temp);
	}

	int ch = getchar();
	printf("End In! %d", ch);
	*/


	/*
	printf("0 %d\n\n", '0');
	printf("5 %d\n\n", '5');
	printf("9 %d\n\n", '9');
	if ('9' > 54) {
		printf("'9' > 54   %d\n", '9');
	}
	*/

	/*
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch > '9') {
			printf("%d", ch);
			//continue;
			break;
		}
		putchar(ch);
	}*/

	/*
	long long factorial = 1;
	for (int i = 1; i < 10; i++)
	{
		factorial *= i;
	}
	printf("factorial %lld\n", factorial);
	*/

	/*
	long sum = 0;
	long t = 1;
	for (int i = 1; i <= 10; i++)
	{
		
		t = 1;
		for (int j = 1; j <= i; j++)
		{
			t *= j;
		}
		
		t *= i;
		sum += t;
	}
	printf("sum %ld\n", sum);

	*/
	/*

	char arr1[] = "Welcome HangZhou!";
	char arr2[] = "#################";

	int left = 0;
	int right = strlen(arr2) - 1;

	while (1) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");
		printf("%s", arr2);
		Sleep(500);
		left++; right--;
		if (left > right)
			break;
	}
	*/

	/*int state = 0;
	int ra = rand(100);
	printf("#####################\n");
	printf("1.pay		   0.exit\n");
	printf("#####################\n");
	do{
		scanf("%d", &state);
		if (state == 0)
			break;
		else
			game(state, ra);
	} while (state);

	printf("已退出游戏");*/


	//perror("测试打印一个错误Error!\n");


	

//	return 0;
//}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件