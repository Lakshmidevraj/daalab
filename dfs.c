#include<stdio.h>
int n,a[10][10],visited[10];
void dfs(int u)
{
int v;
visited[u]=1;
for(v=1;v<=n;v++)
if(a[u][v]==1 && visited[v]==0)
dfs(0);
}
void main()
{
int i,j,source,n;
printf("enter the no of vertices of the graph:");
scanf("%d",&n);
printf("enter the adjacent matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
dfs(1);
for(j=1;j<n;j++)
{
if(visited[j]!=1)
{
printf("%d is not rechable from %d \n",j,i);
printf("so graph is not connected");
}
printf("graph is connected\n");
}
}
