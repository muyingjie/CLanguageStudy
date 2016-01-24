#include <stdio.h>
#include "pointer.h"
int main(){
	int a=10;
	//指向常量的指针 *p不可以被修改
	//const int *p=&a;
	//错误的写法：*p=20;

	int b=20;
	//指针常量 p不可以再指向别的地址
	int * const p=&b;
	//错误的写法：p=&a;

	return 0;
}