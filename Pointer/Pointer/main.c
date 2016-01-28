#include <stdio.h>
#include "pointer.h"
int main(){
	//int a=10;
	//指向常量的指针 *p不可以被修改
	//const int *p=&a;
	//错误的写法：*p=20;

	//int b=20;
	//指针常量 p不可以再指向别的地址
	//int * const p=&b;
	//错误的写法：p=&a;

	//unsigned char str1[10] = {192,168,1,252};
	//unsigned int ip = str2ip(str1);

	//unsigned char str[10];
	//ip2str(ip,str);
	//printf("%d %d %d %d",str[0],str[1],str[2],str[3]);

	//char str[100]="abcdefg";
	//printf("%d", strLen(str));

	char str1[100]="abcdefg";
	char str2[200]="hijklmn";
	strConcat(str1, str2);
	printf("%s",str1);

	getchar();
	return 0;
}