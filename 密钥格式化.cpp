/*��Կ��ʽ�� �ַ���s ֻ�������� ��ĸ�Լ����ۺ� 
����k ����һ�������� ÿ���������k���ַ� ����֮�����ۺŸ���*/ 
#include<stdio.h>
#include<string.h>
#define N 100 
char FormatString(char s1[],int key)
{
	int i,j,l=0,t=key;
	char s2[N];
	for(i=0,j=0;s1[i]-0;)
	{
		if(s1[i]=='-')
				i++; 
		else
	 {
		while(key!=0&&s1[i]!='-')
		{
			if(s1[i]>='a'&&s1[i]<='z')//���д�Сд�任 
		  {
			s1[i]-=32;
		  }
		    s2[j++]=s1[i++];
		    if(l)//�жϱ�ǵ�ֵ 
		    key--;
		}
		if(key==t||(key==0&&s1[i]!=0))
		{
			s2[j++]='-';//�������ۺ� 
			if(key==0)
			key=t; //key�ָ�ԭֵ 
		}
			l=1;	
	 }
	}
	printf("%s",s2);
}

int main(void)
{
	char s[N];
	int key;
	printf("������һ���ַ���ֻ�������� ��ĸ ���ۺţ�");
	gets(s);
	printf("����������е��ַ�����:");
	scanf("%d",&key);
	FormatString(s,key);//�������� 
}
 
