#include <stdio.h>
#include "exersize.h"
int main(){
	//整数转换为字符串
	//char str[100] = {0};
	//myitoa(569,str);
	//printf("%s",str);

	//变量不能定义在函数调用的下面
	//char arr[100] = {0};
	//char arr1[100] = {0};

	//循环实现十进制转换为二进制
	//toBinaryByLoop(569,arr);
	//printf("%s\n",arr);

	//递归实现十进制转换为二进制
	//toBinaryByCursion(569,arr1,0);
	//printf("%s\n",arr1);

	//递归计算字符串长度
	//int n = mystrlen("abcdefg", 0);
	//printf("%d", n);

	//数组首地址的三种表示形式
	//char buf[10];
	//printf("%d %d %d %d",buf,&buf,&buf[0]);

	//数组是一块连续的内存
	//char arr[10] = {'a','b','c'};
	//printf("%d %d %d",&arr[0],&arr[1],&arr[2]);

	//int a=0x1234;
	//char *p=&a;//这样写编译器会报错，但是编译可以通过
	//内存中使这样存储的：0x006FF908 34 12 00 00
	//左边的34是低字节 右边的12是高字节
	//低字节存储到了值比较小的地址 高字节存储到了值比较大的地址
	//printf("%x",*p);//输出低8位 34
	
	//buf的内存：0x0111fec4  12 34 56 78 90 00 00 00 00 00
	//char buf[10]={0x12,0x34,0x56,0x78,0x90};
	//p的内存：0x0111FEB8  c4 fe 11 01 cc cc cc cc
	//int *p=buf;
	//78563412 只输出前4个字节
	//printf("%x",*p);

	getchar();
	return 0;
}