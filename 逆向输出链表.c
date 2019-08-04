#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct node
{
	int data;
	struct node * next;
}ElemSN;

ElemSN * Createlink(int a[])
{
	ElemSN *h,*tail,*p;
	int i;
	h=tail=(ElemSN*)malloc(sizeof(ElemSN));
	h->next=NULL;
	for(i=0;i<N;i++)
	{
		p=(ElemSN*)malloc(sizeof(ElemSN));
		p->data=a[i];
		p->next=NULL;
		tail->next=p;
		tail=p;
	}
	return h;
}
void Prelink(ElemSN *h)
{
	int top=-1;
	int *s;
	ElemSN *p;
	s=(int *)malloc(100*sizeof(int));
	for(p=h;p;p=p->next)
	{
		s[++top]=p->data;
	}
	while(top!=0)
	{
		printf("%5d",s[top--]);
	}
}
int main(void)
{
	ElemSN *s;
	int a[N]={3,2,5,8,4};
	int x,top;
	s=Createlink(a);
	Prelink(s);
} 
