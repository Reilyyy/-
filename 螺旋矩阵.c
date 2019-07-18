#include<stdio.h> ¡¢
#define N 5
void fun(int a[][N])
{
	int cnt=0;
	int n=N;
	int loop,i,j;
	for(loop=0;loop<N/2;loop++)
	{
		for(i=loop,j=i;j<n-1;++j)
		 a[i][j]=++cnt;
		for(;i<n-1;++i)
		 a[i][j]=++cnt;
		for(;j>loop;--j)
		 a[i][j]=++cnt;
		for(;i>loop;--i)
		 a[i][j]=++cnt;
		n--;
	}
	if(N%2)
	{
		a[N/2][N/2]=++cnt;
		
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
	
}

int main(void)
{
	int a[6][6];
	fun(a);
}
