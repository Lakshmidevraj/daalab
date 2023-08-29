#include<stdio.h>
int i,j,n,f=0,r=0,a[10][10],q[10],visited[10];
void bfs(int u)
{
int v;
visited[u]=1;
q[r]=u;
while(f<=r)
{
u=q[f++];
for(v=1;v<=n;v++)
{
if(a[u][v]=1 && visited[v]==0)
{
visited[v]=1;
q[++r]=v;
}
}
}
}
void main()
{
int source;
printf("enter the no of vertices:\n");
scanf("%d",&n);
printf("enter the adjacnecy matrixof the graph:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("enter the source index:");
scanf("%d",&source);
for(i=1;i<=n;i++)
visited[i]=0;
bfs(source);
printf("from vertex %d the vertices are :\n",source);
for(i=1;i<=n;i++)
{if(visited[i]==1)
printf("%d is reachable\n",i);
else
printf("%d is not reachable",i);
}
}
