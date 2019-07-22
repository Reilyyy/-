#include<stdio.h>
#define N 10
void BubbleSont(int a[],int n)
{
	int i,j,tag,t,y;
	for(i=0;i<n-1;i++)
	{
		tag=0;
		for(j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				tag=1;
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
			if(!tag)
			{
				break;
			}
	}
	for(y=0;y<n;y++)
	{
		printf("%2d",a[y]);
	}
}
int main(void)
{
	int a[10]={3,2,5,8,4,7,6,9,0,1};
	BubbleSont(a,N);
}
