#include<stdio.h>

int main(void)
{
	int i,j,k,m,n,x,h,y;
	int a[15][15]={0};
	printf("�������ξ���Ľ���");
	scanf("%d",&i);
	k=1;
	for(n=0;n<i;n++) //�������� 
	{
		if(n%2==1) //������ 
		{
			y=0;
			x=n;
			while(x>=0)
			a[y++][x--]=k++;
		}
		else	//ż���� 
		{
			x=0;
			y=n;
			while(y>=0)
			a[y--][x++]=k++;
		}
	}
	k=(i)*(i);
	for(n=0;n<i;n++) // �������� 
	{
		if(n%2==0) //ż���� 
		{
			x=i-1;
			y=i-1-n;
			while(y<=i-1)
			a[y++][x--]=k--; 
		}
		if(n%2==1) //������ 
		{
			y=i-1;
			x=i-1-n;
			while(x<=i-1)
			a[y--][x++]=k--;
		}
	}
	for(h=0;h<i;h++)
	{
		for(j=0;j<i;j++)
		printf("%5d",a[h][j]);
		printf("\n");

	}
	 return 0;
}
