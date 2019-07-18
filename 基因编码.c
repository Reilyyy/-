#include<stdio.h>
#include<string.h>
void fun(char s[],int l,int h){
	if(h-l<1) return;
	if(fun1(s,l,h)) {//调fun1判断字符串的字符是否相同 

		if(s[l]=='0'){
			printf("A");
		}else{
			printf("B");
		}
	}else{
		printf("C");
		fun(s,l,(l+h)/2);//运用递归 理论上将数组分为两段 设置区间范围是关键 
		fun(s,(l+h)/2,h);
	}
}
//判断字符串是否都是相同的字符 
int fun1(char s[],int l,int h){

	if(h-l<=1) return 1;
	int i,temp=s[l];
	for(i=l+1;i<h;i++)
	{
		temp=temp^s[i];//异或运算符 相同为0 不同为1 
		if(temp==1)
			return 0;
	}
	return 1;
} 
int main(void)
{
	char s[256];
	printf("请输入一个只含有0 1并且小于256位的字符串:");
	scanf("%s",s);
	fun(s,0,strlen(s));
	return 0;
} 
