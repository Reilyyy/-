#include<stdio.h>
#define N 10
void SelectSont(int a[],int n)
{
	int i,j,kmin,t,y;
	for(i=0;i<n-1;i++)
	{
		kmin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[kmin])
			{
				kmin=j;
			}
		}
		if(i-kmin)
			{
				t=a[i];
				a[i]=a[kmin];
				a[kmin]=t;
			}
	}
	for(y=0;y<n;y++)
	{
		printf("%2d",a[y]);
	}
}

int main(void)
{
	int a[10]={0,2,5,8,4,7,6,9,3,1};
	SelectSont(a,N);
}
