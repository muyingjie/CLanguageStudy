#include <stdio.h>
#include "pointer.h"
int main(){
	//int a=10;
	//ָ������ָ�� *p�����Ա��޸�
	//const int *p=&a;
	//�����д����*p=20;

	//int b=20;
	//ָ�볣�� p��������ָ���ĵ�ַ
	//int * const p=&b;
	//�����д����p=&a;

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

	int arr[10]={3,12,54,23,7,26,88,12};
	int i;
	bubble(arr, 10);
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

	getchar();
	return 0;
}