#include<stdio.h>

//ͳ���ַ�����ÿ���ַ����ֵĴ���
int main (void)
{
	int h[256]={0};
	char s[81];
	int i,j;
	gets(s);
	i=0;
	while(s[i])
	{
		h[s[i++]-'\0']++;
	}
	for(j=0;j<256;j++)
	{
		if(h[j])
		printf("%c %d\n",j,h[j]);
	}
 } 
