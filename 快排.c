#include<stdio.h>
#define N 10
int a[10]={3,2,5,8,4,7,6,9,0,1};
int main(void)
{
	int y;
	quickSort(0,9);
	for(y=0;y<N;y++)
	{
		printf("%2d",a[y]);
	}
 } 

void quickSort(int left,int right)
{
	int i,j,temp,t,y;
	if(left>right)
	return;
	temp=a[left];//´æ»ù×¼Êý
	i=left;
	j=right; 
	while(i!=j)
	{
			while(a[j]>=temp&&i<j)
			j--;
			while(a[i]<=temp&&i<j)
			i++;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}
	}

	a[left]=a[i];
	a[i]=temp;
	quickSort(left,i-1);
	quickSort(i+1,right);
	
}

