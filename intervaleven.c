#include<stdio.h>
void main()
{
int n,k,i,a[100],j=0;
scanf("%d%d",&n,&k);
for(i=n+1;i<k;i++)
{
if(i%2==0)
{
a[j]=i;
j++;
}
}
for(i=0;i<j;i++)
{
printf("%d ",a[i]);
}
}