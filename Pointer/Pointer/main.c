#include <stdio.h>
#include <string.h>
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

	//char str[100] = "abcdefg";//�����char *str="abcdefg";Ϊʲô������
	//��һ���ǳ�ʼ���˸����飬Ȼ��Ѹ����ַ����������ַ�����������Ԫ�ؼӸ�\0���ڶ����������Ÿ��ַ�������һ��ָ��ָ�������Ŀռ䡣
	//�������ռ�û���ٲ��������Բ����Դ���ڶ�����ʽ
	//reverseEnglishString(str);
	//printf("%s",str);

	//char str[100] = "�������";
	//reverseChineseString(str);
	//printf("%s", str);

	//char *a[10];
	//printf("%d %d", sizeof(a), sizeof(a[0]));
	//ָ�����ͱ������ȵ�����4���ֽڻ���8���ֽ��Ǻͱ�������ص�
	//VS��Ĭ����32λ�ı����������Եõ�40 4

	//ָ���ά�����ָ��
	int a[2][3] = {{1,2,3},{4,5,6}};
	int (*p)[3];//ָ��pָ��int[3]�������� ��ά��������ĵ�һά�ĸ����ֵ�����������͵�
	int i;
	int j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d",*(*(p+i)));
			//p+i �ǵ�i�е��׵�ַ
			//*(p+i)�ǵ�i�е�0��Ԫ�صĵ�ַ
			//*(*(p+i))�ǵ�i�е�0��Ԫ�ص�ֵ
		}
	}

	getchar();
	return 0;
}