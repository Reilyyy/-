/*密钥格式化 字符串s 只包含数字 字母以及破折号 
给定k 除第一个分组外 每个分组包含k个字符 分组之间破折号隔开*/ 
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
			if(s1[i]>='a'&&s1[i]<='z')//进行大小写变换 
		  {
			s1[i]-=32;
		  }
		    s2[j++]=s1[i++];
		    if(l)//判断标记的值 
		    key--;
		}
		if(key==t||(key==0&&s1[i]!=0))
		{
			s2[j++]='-';//插入破折号 
			if(key==0)
			key=t; //key恢复原值 
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
	printf("请输入一个字符串只包含数字 字母 破折号：");
	gets(s);
	printf("请输入分组中的字符个数:");
	scanf("%d",&key);
	FormatString(s,key);//调整理函数 
}
 
