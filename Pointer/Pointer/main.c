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

	//char str1[100]="abcdefg";
	//char str2[200]="hijklmn";
	//strConcat(str1, str2);
	//printf("%s",str1);

	//int arr[10]={3,12,54,23,7,26,88,12};
	//int i;
	//bubble(arr, 10);
	//for(i=0;i<10;i++){
	//	printf("%d ",arr[i]);
	//}

	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
	//int i;
	//reverseArr(arr, 10);
	//for(i=0;i<10;i++){
	//	printf("%d ",arr[i]);
	//}

	//int arr[5]={2,3,4,11,8};
	//int secondMax = getSecondMaxItem(arr,5);
	//printf("%d",secondMax);

	//char str[100] = "abcdefg";//定义成char *str="abcdefg";为什么不可以
	//reverseEnglishString(str);
	//printf("%s",str);

	char str[100] = "北京你好";
	reverseChineseString(str);
	printf("%s", str);

	getchar();
	return 0;
}