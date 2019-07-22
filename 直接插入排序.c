#include<stdio.h>
#define N 10
void InsentSont(int a[],int n)
{
	int i,j,x,y;
	for(i=1;i<n;i++)
	{
		x=a[i];//先用x把a[i]存起来 
		for(j=i-1;j>-1&&a[j]>x;a[j+1]=a[j],j--);
		a[j+1]=x;
	}	
	return a;
}

int main(void)
{
	int y;
	int a[10]={3,2,5,8,4,7,6,9,0,1};
	InsentSont(a,N);
		for(y=0;y<N;y++)
	{
		printf("%3d",a[y]);
	}
}
