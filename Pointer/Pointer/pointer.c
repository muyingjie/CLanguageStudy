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