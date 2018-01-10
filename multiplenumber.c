#include<stdio.h>
void main()
{
int n,i,f=1,a[100];
scanf("%d",&n);
for(i=1;i<=5;i++)
{
a[i]=n*i;
}
for(i=1;i<=5;i++)
{

printf("%d ",a[i]);
}

}