#include<stdio.h>
int main()
{
int i,n;
int a[10],*parr=a;
printf("\n Enter the number of elements:");
scanf("%d",&n);
printf("\n Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",parr+i);
}
printf("\n Entered array elements are:");
for(i=0;i<n;i++)
{
printf("\t %d",*(parr+i));
}
return 0;
}