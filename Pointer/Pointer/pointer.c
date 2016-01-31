//ip整数转字符串
//ip地址事实上就是一个整数
void ip2str(unsigned int n, unsigned char str[]){
	unsigned char *p = &n;
	str[0] = *p;
	p++;
	str[1] = *p;
	p++;
	str[2] = *p;
	p++;
	str[3] = *p;
}
//字符串转ip整数
int str2ip(unsigned char str[]){
	int n = 0;
	unsigned char *c = &n;
	*c = str[0];
	c++;
	*c = str[1];
	c++;
	*c = str[2];
	c++;
	*c = str[3];
	return n;
}
//用指针求字符串长度
int strLen(char str[]){
	char *p=str;
	int i = 0;
	while(*p){
		i++;
		p++;
	}
	return i;
}
//将s2附加在s1后面
void strConcat(char s1[], char s2[]){
	char *p1=s1;
	char *p2=s2;
	int i=0;
	int j=0;
	while(*p1){
		i++;
		p1++;
	}
	//while(s2[j]){
	//	s1[i]=s2[j];
	//	j++;
	//	i++;
	//}
	while(*p2){
		*p1 = *p2;
		p1++;
		p2++;
	}
	//循环体里面的代码可以简写成*p1++ = *p2++
}
//指针实现冒泡排序
void bubble(int *arr, int len){
	int i;
	int j;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(*(arr+i) < *(arr+j)){
				int tmp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=tmp;
			}
		}
	}
}
//数组逆置
void reverseArr(int *arr,int len){
	int i;
	int tmpItem;
	for(i=0;i<len/2;i++){
		tmpItem = *(arr + i);
		*(arr + i) = *(arr + len - i - 1);
		*(arr + len - i - 1) = tmpItem;
	}
}
//求数组第二大元素
int getSecondMaxItem(int *arr,int len){
	int max = arr[0];
	int secondMax = arr[1];
	int tmp;
	int i;
	if(max < secondMax){
		tmp = max;
		max = secondMax;
		secondMax = tmp;
	}
	for(i=2;i<len;i++){
		if(arr[i]>max){
			secondMax = max;
			max = arr[i];
		}
		if(arr[i]>secondMax && arr[i]<max){
			secondMax = arr[i];
		}
	}
	return secondMax;
}