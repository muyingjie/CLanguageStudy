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