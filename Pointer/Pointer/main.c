#include <stdio.h>
#include <string.h>
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
	//第一个是初始化了个数组，然后把给的字符串挨个当字符放数组里，最后元素加个\0，第二个常量区放个字符串，用一个指针指向常量区的空间。
	//常量区空间没法再操作，所以不可以传入第二种形式
	//reverseEnglishString(str);
	//printf("%s",str);

	//char str[100] = "北京你好";
	//reverseChineseString(str);
	//printf("%s", str);

	//char *a[10];
	//printf("%d %d", sizeof(a), sizeof(a[0]));
	//指针类型变量长度到底是4个字节还是8个字节是和编译器相关的
	//VS中默认是32位的编译器，所以得到40 4

	//指向二维数组的指针
	//int a[2][3] = {{1,2,3},{4,5,6}};
	//int (*p)[3];//指针p指向int[3]这种类型 二维数组里面的第一维的各项的值就是这种类型的
	//int i;
	//int j;
	//for(i=0;i<2;i++){
	//	for(j=0;j<3;j++){
	//		printf("%d",*(*(p+i)));
	//		//p 是第0行的首地址
	//		//p+i 是第i行的首地址
	//		//*(p+i) p[i] 是第i行第0个元素的地址
	//		//*(*(p+i)) p[i][0] 是第i行第0个元素的值
	//		//*(*(p+i)+j) 是第i行第j个元素的值 等价于p[i][j]
	//	}
	//}

	//通过指针求二维数组每行每列的和
	//int a[3][2] = {{1,2},{3,4},{5,6}};
	//int (*p)[2] = a;
	//
	//int i;
	//int j;
	//int rowSum = 0;
	//int colSum = 0;
	//先写出不用指针的方法
	//for (i = 0; i < 3; i++){
	//	rowSum = 0;
	//	for(j = 0; j < 2;j++){
	//		rowSum += a[i][j];
	//	}
	//	printf("第%d行的和为%d\n", i, rowSum);
	//}
	//
	//for(i = 0; i < 2; i++){
	//	colSum = 0;
	//	for(j = 0; j < 3; j++){
	//		colSum += a[j][i];
	//	}
	//	printf("第%d列的和为%d\n", i, colSum);
	//}
	//再用指针的方法
	//for(i=0;i<3;i++){
	//	rowSum = 0;
	//	for(j=0;j<2;j++){
	//		rowSum += *(*(p+i)+j);
	//	}
	//	printf("第%d行的和为%d\n", i, rowSum);
	//}
	//for(i=0;i<2;i++){
	//	colSum = 0;
	//	for(j=0;j<3;j++){
	//		colSum += *(*(p+j)+i);
	//	}
	//	printf("第%d列的和为%d\n", i ,colSum);
	//}

	//int a[2][3]={{1,2,3},{4,5,6}};
	//transmitArgumentsOftwoDimensionArray(a,2,3);

	//char s1[100]={'a','b','c'};
	//char s2[100]={'d','e','f'};
	//mystrcat(s1,s2);
	//printf("%s",s1);

	char s1[100] = "abcdefghijklmn";
	char *s2=mystrchr(s1,'d');
	printf("%s",s2);

	getchar();
	return 0;
}