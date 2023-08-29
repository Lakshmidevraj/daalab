#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int a[], int n)
{
	int i,j,k,heap=0,v;
	for(int i=(n/2);i>0;i--)
	{
		//printf("\t %d",i);
		k=i;
		v=a[k];
		heap=0;
		while(heap==0 && (2*k)<=n)
		{
			j=2*k;
			if(j<n)
			{
				if(a[j]<a[j+1])
				j=j+1;
			}
			if(v>=a[j])
				heap=1;
			else
			{
				a[k]=a[j];
				k=j;
			}
			a[k]=v;
		}
	}
}
void heapsort(int a[],int N)
{
	int i;
	printf("initial heap elements:\n");
	for(i=1;i<=N;i++)
		printf("%d \n", a[i]);
	heapify(a,N);	
	for(i=N;i>1;i--)
	{
		swap(&a[1],&a[i]);
		heapify(a,i);
	}
}
void main()
{
	int n,i,a[1000];
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=1;i<=n;i++)
		scanf("%d \n",&a[i]);
	heapsort(a,n);
	printf("sorted elements:\n");
	for(i=1;i<=n;i++)
	printf("%d \n",a[i]);
}				
										
