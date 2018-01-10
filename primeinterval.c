#include<stdio.h>
void main()
{
int n,f=0,k,i,a[100],j=0,q;
scanf("%d%d",&n,&k);
for(i=n+1;i<k;i++)
{
	for(q=2;q<i;q++)
	{
		if(i%q==0)
			{
				f=1;
			}
	}
if(f==0)
{
a[j]=i;
j++;
}
f=0;
}
for(i=0;i<j;i++)
{
printf("%d ",a[i]);
}
}