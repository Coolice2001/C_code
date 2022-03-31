#include <stdio.h>	//引入标准输入、输出头文件。

/*
int main()	//主函数-程序的入口，有且仅有一个。按f10测试
{
	printf("你好，世界！");
	return 0;
}
*/



/*
int main()
{
	char zhl = 'A';	//char表达字符,字符注意加''	。
	printf("%c\n", zhl);	//%c打印字符格式的数据。

	int age = 22;	//int表示整型,long表示长整型，long long更长的整型，short表示短整型。
	printf("%d\n", age);	//%d打印整型。

	float xs = 3.14;	//float表示单精度浮点型，double表示双精度浮点型。
	printf("%f\n", xs);	//%f打印点精度浮点型，%lf打印双精度浮点型。

	return 0;
}
*/



/*
int main()
{
	printf("%lld\n", sizeof(int));	//查看int类型的数据所占内存的大小，4字节。
	printf("%lld\n", sizeof(long));	//4字节。
	printf("%lld\n", sizeof(long long));	//8字节。
	printf("%lld\n", sizeof(short));	//2字节。
	printf("%lld\n", sizeof(char));	//1字节。
	printf("%lld\n", sizeof(float));	//4字节。
	printf("%lld\n", sizeof(double));	//8字节。
	return 0;
}
*/



/*
int main()
{
	short age = 22;	//向内存申请2个字节，来存放22。注意节省内存。
	float weight = 60.1f;	//系统默认变量为双精度浮点型，所以加一个f表示点精度浮点型。
	return 0;
}
*/



/*
int num1 = 20;	//全局变量-定义在代码块（{}）之外的变量。
int main()
{
	int num1 = 10;	//局部变量-定义在代码块（{}）内的变量。只能在代码块内使用。
	printf("%d", num1);	//局部变量优先级大于全局变量。
	return 0;
}
*/


	
int main()
{
	//计算两个整数的和。
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1,&num2);	//scanf(scan_s)-输入函数。&取地址符号。
	int sum = 0;	//C语言语法规定，变量要定义当前代码块的最前面。vs2022好像不用。
	sum = num1 + num2;
	printf("sum = %d", sum);
	return 0;
}
