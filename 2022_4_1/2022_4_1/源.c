#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	//1.字面常量
	3;
	4;
	2.1;
	//2.const修饰的常变量。
	const int num = 3;	//const-常属性。让一个变量具有常属性，本质还是变量。
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	return 0;
}
*/



/*
int main()
{
	const int a = 10;	//a是一个常变量。
	int arr[a] = { 0 };	//数组需要常量。
	return 0;
}
*/



/*
//3.#define定义的标识符常量。
#define max 10
int main()
{
	int arr[max] = { 0 };
	printf("%d\n", max);
	return 0;
}
*/



/*
//4.枚举常量。
enum Color
{
	Red,
	Yellow,
	Blue
};

int main()
{
	enum Color A = Red;
	printf("%d\n", Red);	//0
	printf("%d\n", Yellow);	//1
	printf("%d\n", Blue);	//2
	return 0;
}
*/