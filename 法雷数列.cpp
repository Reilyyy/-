#include<stdio.h>
#define N 100 
struct fraction{
	int x;
	char t;
	int y;
	double data;
};

int factor(int i,int j)//计算最大公因数 
{
	int a;
	for(a=j;a>=1;a--) 
		{
			if(j%a==0&&i%a==0)
			return a;
		}
}

void sort(struct fraction a[],int c)//直接插入法排序 
{
	struct fraction x;
	int i,j;
	for(i=2;i<=c;i++)
	{
		x=a[i];
		for(j=i-1;j>0&&(a[j].data>x.data);a[j+1]=a[j],j--);
		a[j+1]=x;
	}
	for(i=1;i<=c;i++)
	{
		if(a[i].data==a[i+1].data)
		{
			for(j=i;j<=c;j++)
			{
				a[j]=a[j+1];
			}
				c--;
		}
	}
	printf("数组个数为:%d\n",c+2);
	printf("排序后的数组为");
	for(i=0;i<=c+1;i++)
	printf("%5d%c%d",a[i].x,a[i].t,a[i].y);
}


void progression(int n)
{
	int i,j,k,d,m,c=1;
	double div;
	struct fraction a[N];
	a[0].x=0;
	a[0].t='/';
	a[0].y=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			k=factor(i,j);
			d=i/k;
			m=j/k;
				a[c].x=m;
				a[c].t='/';
				a[c].y=d;
				a[c].data=m*1.0/d;	
				c++;
		}
	}
			a[c].x=1;
			a[c].t='/';
			a[c].y=1;
			sort(a,c-1);
}

int main(void)
{
	int n;
	printf("请输入一个自然数n：");
	scanf("%d",&n);
	progression(n);
}
