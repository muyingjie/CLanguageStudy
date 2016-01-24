#include "utility.h"
//����ת�����ַ���
void myitoa(int n,char str[]){
	int i = 0;
	int remain;
	while(n/10 || n%10){
		remain = n%10;
		str[i] = '0' + remain;
		n /= 10;
		i++;
	}
	reverseArr(str, i);
}
//ʮ����ת��Ϊ������ ������nת��Ϊ�ַ���arr
void toBinaryByLoop(int n,char arr[]){
	int i = 0;
	while(n/2 || n%2){
		int remain = n%2;
		arr[i] = '0' + remain;
		n/=2;
		i++;
	}
	reverseArr(arr, i);
}
//ʮ����ת��Ϊ������ �ݹ�ʵ��
void toBinaryByCursion(int n,char arr[],int i){
	if(n == 0){
		//�ݹ�����һ�η�ת����
		reverseArr(arr, i);
		return;
	}
	if(n/2 || n%2){
		int remain = n%2;
		arr[i++] = '0' + remain;
		n/=2;
		toBinaryByCursion(n, arr, i);
	}
}
//�ݹ�õ��ַ�������
int mystrlen(char str[], int i){
	//�ַ����бȽ�ʱӦ����'\0'������'0'
	if(str[i] == '\0'){
		return i;
	}else{
		mystrlen(str, ++i);
	}
}