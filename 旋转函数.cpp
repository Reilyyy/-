/*旋转函数 给出数组a 含有n个元素 
生成形如 n1*0+n2*1+。。。nn*(n-1)的n个函数 并求出其最大值输出 */
#include<stdio.h>
#define N 100
int max(int a[],int n)
{
	int m[N],i,k,max,sum,j,tail;
	for(i=0;i<n;i++)
	{
		sum=0;
		tail=a[n-1];
		for(k=n-2;k>=0;k--)//为旋转的数字声明一个数组 
		{
			a[k+1]=a[k];
		}
		a[0]=tail;
		for(j=0,k=0;j<n,k<n;j++,k++)//与旋转后的数组挨个相乘 
		{
			sum=sum+a[k] *j;
		}
		m[i]=sum;
	}
	max=m[0];
	for(i=1;i<n;i++)
	{
		if(m[i]>max)
		{
			max=m[i];//找出最大值并返回 
		}
	}
	return max;
	
}

int main(void)
{
	int a[N],n,i,m;
	printf("请输入数组的元素个数 小于100：");
	scanf("%d",&n);
	printf("请输入一个整数数组：");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=max(a,n);
	printf("所求旋转函数的最大值为%d",m);
} 
