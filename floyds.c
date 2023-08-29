#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
		return b;
		else
			return a;
}
void floyd(int path[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				path[i][j]=min(path[i][j],(path[i][k]+path[k][j]));
}
void main()
{
	int n,path[10][10],i,j;
	printf("Enter the no. of vertices of graph\n");
	scanf("%d",&n);
	printf("Enter cost adjacency matrix of graph\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&path[i][j]);
	floyd(path,n);
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
			printf("%d\t",path[i][j]);
		}
		printf("\n");
	}
		
}

