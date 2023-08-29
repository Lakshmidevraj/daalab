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
 
 
