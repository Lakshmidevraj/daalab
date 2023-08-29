#include<stdio.h>
int parent[10];
int mincost=0,cost[10][10],n,i,j,ne,a,b,min,u,v;
int find(int);
int uni(int,int);
void main()
{
	printf("enter the no of vertices\n");
	scanf("%d",&n);
	printf("enter the cost matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d",&cost[i][j]);
		if(cost[i][j]==0)
		cost[i][j]=999;
	}
	ne=1;
	
	printf("\n the edges of the spanning tree are :\n");
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		for(j=1;j<=n;j++)
		if(cost[i][j]<min)
		{
			min=cost[i][j];
			a=u=i;
			b=v=j;
			}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			printf("d edge(%d,%d)=%d\n",ne++,a,b,min);
			mincost+=min;
		}
		cost[a][b]=cost[b][a]=999;
		}
		printf("the min cost of spanning tree is %d\n",mincost);
		
}
int find(int i)
{
	while(parent[i])
	i=parent;
	return i;
}
int uni (int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}
