//�鲢����
/*
�鲢����ԭ��
���ȣ����������������ĺϲ�����һ�����飬ǰ������򣬺���Ҳ���򣬰�����һ��������ڳ�һ����ȫ�������飩 
�鲢�����˼����ǣ���һ�����鲻�϶��֣�һֱ��ֻ��һ��Ԫ�ص�ʱ�򣬲��Ϸ��غϲ������غϲ�����˼���ǵ�����������ϲ��ķ�������
*/ 
#include <stdio.h>
//��װ������������ϲ���һ����������  high���ݵ������Ԫ�ص��±� 
void merge(int a[],int low,int mid,int high) 
{
	int left_size=mid-low;
	int right_size=high-mid+1;
	int left[left_size];
	int right[right_size];
	int i=0;
	int j=0;
	int k=low;
//	int l=high-low+1;
	//�ֳ��������� 
	for(i=low;i<mid;i++)
	{
		left[i-low]=a[i];
	}
	for(j=mid;j<=high;j++)
	{
		right[j-mid]=a[j];
	}
	
	i=0;
	j=0;
	//������������ĺϲ�
	while(i<left_size&&j<right_size)
	{
		
		if(left[i]<right[j])
		{
			a[k++]=left[i++];
		}
		else 
		{
			a[k++]=right[j++];
		}
		 
	}
	//�����һ������û�кϲ��꣬����Ҫ��ʣ������ϲ�
	while(i<left_size)
		a[k++]=left[i++];
	while(j<right_size)
		a[k++]=right[j++];
} 

//�鲢����
void merge_sort(int a[], int low, int high){
	if(low==high)
		return;
	else
	{
		int mid= (low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid+1,high);
	}
} 
int main(void)
{
	int a[10]={3,2,5,8,4,7,6,9,1,10};
	merge_sort(a,0,9);
	int i=0;
	for(;i<10;i++)
	{
		printf("%5d",a[i]);
	}
}
