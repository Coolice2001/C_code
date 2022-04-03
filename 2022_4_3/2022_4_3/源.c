#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>	//strlen函数所需要的头文件

/*
int main()
{
	char arr1[] = "abc";	//数组，默认有转义字符“\0”。"abc"字符串。
	char arr2[] = { 'a','b','c' };	// 没有转义字符“\0”，“\0”标志字符串的结束。'a','b','c'字符。
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/



/*
int main()
{
	char arr1[] = "abc";			// 定义一个字符串。
	char arr2[] = { 'a','b','c' };	// 定义一个字符串。
	char arr3[] = { 'a','b','c','\0'};	//“\0”标志字符串的结束。
	printf("%d\n", strlen(arr1));	//strlen 计算字符串的长度。3.
	printf("%d\n", strlen(arr2));	//随机长度。
	printf("%d\n", strlen(arr3));
	return 0;
}
*/



/*
int main()
{
	//printf("\");
	printf("%lld\n",strlen("c\test\32\test.c"));	//"\"转义字符。
	printf("%c\n", '\132');	//'\'后接1-3个8进制。
	printf("%c\n", '\x61');	//'\x'后接2个16进制。
	return 0;
}
*/
