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

	unsigned char str1[10] = {192,168,1,252};
	unsigned int ip = str2ip(str1);

	unsigned char str[10];
	ip2str(ip,str);
	printf("%d %d %d %d",str[0],str[1],str[2],str[3]);

	getchar();
	return 0;
}