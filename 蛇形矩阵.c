#include<stdio.h>

int main(void)
{
	int i,j,k,m,n,x,h,y;
	int a[15][15]={0};
	printf("输入蛇形矩阵的阶数");
	scanf("%d",&i);
	k=1;
	for(n=0;n<i;n++) //左上三角 
	{
		if(n%2==1) //奇数行 
		{
			y=0;
			x=n;
			while(x>=0)
			a[y++][x--]=k++;
		}
		else	//偶数行 
		{
			x=0;
			y=n;
			while(y>=0)
			a[y--][x++]=k++;
		}
	}
	k=(i)*(i);
	for(n=0;n<i;n++) // 右下三角 
	{
		if(n%2==0) //偶数行 
		{
			x=i-1;
			y=i-1-n;
			while(y<=i-1)
			a[y++][x--]=k--; 
		}
		if(n%2==1) //奇数行 
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
