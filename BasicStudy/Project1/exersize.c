#include "utility.h"
//整数转换成字符串
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
//十进制转换为二进制 将整数n转换为字符串arr
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
//十进制转换为二进制 递归实现
void toBinaryByCursion(int n,char arr[],int i){
	if(n == 0){
		//递归的最后一次翻转数组
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
//递归得到字符串长度
int mystrlen(char str[], int i){
	//字符进行比较时应该用'\0'而不是'0'
	if(str[i] == '\0'){
		return i;
	}else{
		mystrlen(str, ++i);
	}
}