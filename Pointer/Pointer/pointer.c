//ip����ת�ַ���
//ip��ַ��ʵ�Ͼ���һ������
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
//�ַ���תip����
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
//��ָ�����ַ�������
int strLen(char str[]){
	char *p=str;
	int i = 0;
	while(*p){
		i++;
		p++;
	}
	return i;
}
//��s2������s1����
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
	//ѭ��������Ĵ�����Լ�д��*p1++ = *p2++
}
//ָ��ʵ��ð������
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
//��������
void reverseArr(int *arr,int len){
	int i;
	int tmpItem;
	for(i=0;i<len/2;i++){
		tmpItem = *(arr + i);
		*(arr + i) = *(arr + len - i - 1);
		*(arr + len - i - 1) = tmpItem;
	}
}
//������ڶ���Ԫ��
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