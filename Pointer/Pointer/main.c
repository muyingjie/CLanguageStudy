#include <stdio.h>
#include "pointer.h"
int main(){
	int a=10;
	//ָ������ָ�� *p�����Ա��޸�
	//const int *p=&a;
	//�����д����*p=20;

	int b=20;
	//ָ�볣�� p��������ָ���ĵ�ַ
	int * const p=&b;
	//�����д����p=&a;

	return 0;
}