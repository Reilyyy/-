/*��ת���� ��������a ����n��Ԫ�� 
�������� n1*0+n2*1+������nn*(n-1)��n������ ����������ֵ��� */
#include<stdio.h>
#define N 100
int max(int a[],int n)
{
	int m[N],i,k,max,sum,j,tail;
	for(i=0;i<n;i++)
	{
		sum=0;
		tail=a[n-1];
		for(k=n-2;k>=0;k--)//Ϊ��ת����������һ������ 
		{
			a[k+1]=a[k];
		}
		a[0]=tail;
		for(j=0,k=0;j<n,k<n;j++,k++)//����ת������鰤����� 
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
			max=m[i];//�ҳ����ֵ������ 
		}
	}
	return max;
	
}

int main(void)
{
	int a[N],n,i,m;
	printf("�����������Ԫ�ظ��� С��100��");
	scanf("%d",&n);
	printf("������һ���������飺");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=max(a,n);
	printf("������ת���������ֵΪ%d",m);
} 
