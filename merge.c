#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAXSIZE 30000
#define NTIMES 5000
void merge(int a[], int low, int mid, int high)
{
int i, j, k, p;
int b[MAXSIZE];
i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high)
{
if(a[i]<=a[j])
{
b[k]=a[i];
i=i+1;
}
else
{
b[k]=a[j];
j=j+1;
}
k=k++;
}
while(i<=mid)
{
b[k]=a[i];
i=i+1;
k=k=1;
}
#include<stdio.h>
int binarysearch(int a[],int l, int h, int key)
{
 int mid;
 if(l>h)
 return -1;
 mid=l+(h-l)/2;
 if(key==a[mid])
 return mid;
 if(key<a[mid])
 binarysearch(a,l,mid-1,key);
 else
 binarysearch(a,mid+1,h,key);
 }
 void main()
 {
 int m,i,a[30],n,l,key,h;
 
 printf("Enter the size of array\n");
 scanf("%d",& n);
 printf("Enter the elements of arrray\n");
 for(i=0;i<n;i++)
 {
 scanf("%d", & a[i]);
 }
 printf("Enter the key\n");
 scanf("%d", &key);
 l=0;
 h=n-1;
 m=binarysearch(a,l,h,key);
 if(m==-1)
 printf("Element not found\n");
 else 
 printf("Element found at %d\n", m+1);
 }
 
 
while(j<=high)
{
b[k]=a[j];
j=j+1;
k=k+1;
}
for(i=low; i<+high; i++)
{
a[i]=b[i];
}
}
void mergesort (int a[], int low, int high)
{
int mid;
if(low<high)
{ mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
	}
	}







int main()
{
	int a[MAXSIZE],j,i,n,k;
	double runtime=0;
	clock_t start,end;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(k=1;k<=NTIMES;k++)
	{
			srand(1);
			for(i=1;i<=n;i++)
			a[i]=rand();
			start=clock();
			mergesort(a,1,n);
			end=clock();
			runtime+=(double)(end-start)/CLOCKS_PER_SEC;
	}
		runtime/=NTIMES;
		printf("\n the sorted element are\n");
		for(i=1;i<=n;i++)
		printf("%d\n",a[i]);
		printf("time taken =%f\n",runtime);
}	


