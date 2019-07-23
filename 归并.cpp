//归并排序
/*
归并排序原理：
首先，完成两个有序数组的合并（即一个数组，前半段有序，后半段也有序，把这样一个数组调节成一个完全有序数组） 
归并排序的思想就是，把一个数组不断二分，一直到只有一个元素的时候，不断返回合并（返回合并的意思就是调用有序数组合并的方法），
*/ 
#include <stdio.h>
//封装两个有序数组合并成一个有序数组  high传递的是最后元素的下标 
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
	//分成两个数组 
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
	//两个无序数组的合并
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
	//如果有一个数组没有合并完，则需要把剩余数组合并
	while(i<left_size)
		a[k++]=left[i++];
	while(j<right_size)
		a[k++]=right[j++];
} 

//归并排序
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
