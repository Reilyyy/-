#include<stdio.h>
#include<string.h>
void fun(char s[],int l,int h){
	if(h-l<1) return;
	if(fun1(s,l,h)) {//��fun1�ж��ַ������ַ��Ƿ���ͬ 

		if(s[l]=='0'){
			printf("A");
		}else{
			printf("B");
		}
	}else{
		printf("C");
		fun(s,l,(l+h)/2);//���õݹ� �����Ͻ������Ϊ���� �������䷶Χ�ǹؼ� 
		fun(s,(l+h)/2,h);
	}
}
//�ж��ַ����Ƿ�����ͬ���ַ� 
int fun1(char s[],int l,int h){

	if(h-l<=1) return 1;
	int i,temp=s[l];
	for(i=l+1;i<h;i++)
	{
		temp=temp^s[i];//�������� ��ͬΪ0 ��ͬΪ1 
		if(temp==1)
			return 0;
	}
	return 1;
} 
int main(void)
{
	char s[256];
	printf("������һ��ֻ����0 1����С��256λ���ַ���:");
	scanf("%s",s);
	fun(s,0,strlen(s));
	return 0;
} 
