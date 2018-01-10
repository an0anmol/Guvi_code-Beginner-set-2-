#include<stdio.h>
#include<math.h>
void main()
{
int n,count=0,k,k1,r,s=0;
scanf("%d",&n);
k=n;
k1=k;
while(n!=0)
{

n=n/10;
count=count+1;
}

while(k!=0)
{
r=k%10;
s=s+pow(r,count);
k=k/10;
}
if(s==k1)
printf("yes");
else
printf("no");
}