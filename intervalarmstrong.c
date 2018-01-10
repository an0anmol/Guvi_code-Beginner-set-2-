#include<stdio.h>
#include<math.h>
void main()
{
int n,last,i,re,count=0,k,k1,r,s=0,j=0,a[1000];
scanf("%d%d",&i,&re);
for(n=i+1;n<re;n++)
{

	k=n;
	k1=k;
	last=k1;
	while(k1!=0)
	{

		k1=k1/10;
		count=count+1;
	}

	while(k!=0)
	{
		r=k%10;
		s=s+pow(r,count);
		k=k/10;
	}
	if(s==last)
	{	a[j]=n;	
		j++;
	}



count=0;
s=0;
}
for(n=0;n<j;n++)
{
printf("%d ",a[n]);

}



}
