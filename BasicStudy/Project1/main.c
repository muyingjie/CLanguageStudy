#include <stdio.h>
#include "exersize.h"
int main(){
	//����ת��Ϊ�ַ���
	//char str[100] = {0};
	//myitoa(569,str);
	//printf("%s",str);

	//�������ܶ����ں������õ�����
	//char arr[100] = {0};
	//char arr1[100] = {0};

	//ѭ��ʵ��ʮ����ת��Ϊ������
	//toBinaryByLoop(569,arr);
	//printf("%s\n",arr);

	//�ݹ�ʵ��ʮ����ת��Ϊ������
	//toBinaryByCursion(569,arr1,0);
	//printf("%s\n",arr1);

	//�ݹ�����ַ�������
	//int n = mystrlen("abcdefg", 0);
	//printf("%d", n);

	//�����׵�ַ�����ֱ�ʾ��ʽ
	//char buf[10];
	//printf("%d %d %d %d",buf,&buf,&buf[0]);

	//������һ���������ڴ�
	//char arr[10] = {'a','b','c'};
	//printf("%d %d %d",&arr[0],&arr[1],&arr[2]);

	//int a=0x1234;
	//char *p=&a;//����д�������ᱨ�����Ǳ������ͨ��
	//�ڴ���ʹ�����洢�ģ�0x006FF908 34 12 00 00
	//��ߵ�34�ǵ��ֽ� �ұߵ�12�Ǹ��ֽ�
	//���ֽڴ洢����ֵ�Ƚ�С�ĵ�ַ ���ֽڴ洢����ֵ�Ƚϴ�ĵ�ַ
	//printf("%x",*p);//�����8λ 34
	
	//buf���ڴ棺0x0111fec4  12 34 56 78 90 00 00 00 00 00
	//char buf[10]={0x12,0x34,0x56,0x78,0x90};
	//p���ڴ棺0x0111FEB8  c4 fe 11 01 cc cc cc cc
	//int *p=buf;
	//78563412 ֻ���ǰ4���ֽ�
	//printf("%x",*p);

	getchar();
	return 0;
}