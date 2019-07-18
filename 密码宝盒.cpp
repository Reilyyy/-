#include<stdio.h>
#include<queue>
#include<string.h>
#include<algorithm>
using namespace std;
int mark[5001],item[17],pre[5001],ansAt[5001],n,m,c;//mark为标记 pre为找答案记录路径 ansAt:res为i时所取得的item 
char ans[5001];
char itoc(int i)
{
	return i<10?(i+'0'):(i-10+'A'); 
}
int ctoi(char c)
{
	return c>='0'&&c<='9'?(c-'0'):(c-'A'+10);
}
int bfs()
{
	queue<int>q;
	int res,temp,i;
	q.push(0);
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		for(i=0;i<m;i++)
		{
			res=(temp*c+item[i])%n;
			if(!mark[res]&&!(!temp&&!item[i]))
			{
				mark[res]=1;
				ansAt[res]=item[i];
				pre[res]=temp;
				if(res==0)
				{
					return 1;
				}
				q.push(res);
			}
			
		}
	}
	return 0;
}
int check()
{
	int temp=pre[0],i=0;
	ans[i++]=itoc(ansAt[0]);
	while(temp)
	{
		ans[i++]=itoc(ansAt[temp]);
		temp=pre[temp];
	}
	ans[i]=0;
	if(i<=500)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int t,i,len;
	char str[3];
	scanf("%d",&t);
	while(t--)
	{
		memset(mark,0,sizeof(mark));
		memset(pre,0,sizeof(pre));
		scanf("%d%d%d",&n,&c,&m);
		for(i=0;i<m;i++)
		{
			scanf("%s",str);
			item[i]=ctoi(str[0]);
		}
		sort(item,item+m);
		if(n==0)
		{
			if(item[0]==0)
			{
				printf("0\n");
			}
			else
			{
				printf("so sorry\n");
			}
			continue;
		}
		if(bfs()&&check())
		{
			len=strlen(ans);
			for(i=len-1;i>=0;i--)
			{
				printf("%c",ans[i]);
			}
			printf("\n");
		}
		else
		{
			printf("so sorry\n");
		}
	}
	return 0;
}
