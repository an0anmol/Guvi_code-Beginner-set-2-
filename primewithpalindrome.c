#include<stdio.h>
void main()
{
int n,f=0,i,se,s=0,r,p=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
f=1;
}
}
if(f==0)
{se=n;
while(n!=0)
{
r=n%10;
s=s*10+r;                                                                           
n=n/10;
}
if(s==se)
p=1;
}
if(f==0&&p==1)
printf("Yes");
else
printf("No");

}