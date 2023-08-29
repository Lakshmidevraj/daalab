
    #include<stdio.h>
void warshal(int path[10][10],int n)
{
int i,j,k;
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
path[i][j]=(path[i][j])||(path[i][k]&&path[k][j]);
}
void main()
{
int n,path[10][10],source,i,j;
printf("enter the no of vertices of graph\n");
scanf("%d",&n);
printf("enter adjacency matrix of graph\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&path[i][j]);
}
warshal(path,n);
printf("the path matrix is:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",path[i][j]);
}
printf("\n");
}
}




 

void binary_search(int list[], int lo, int hi, int key)

{

    int mid;

 

    if (lo > hi)

    {

        printf("Key not found\n");

        return;

    }

    mid = (lo + hi) / 2;

    if (list[mid] == key)

    {

        printf("Key found\n");

    }

    else if (list[mid] > key)

    {

        binary_search(list, lo, mid - 1, key);

    }

    else if (list[mid] < key)

    {

        binary_search(list, mid + 1, hi, key);

    }

}
