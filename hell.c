#include<stdio.h>
main()
{
	int n,r,sum,temp;
	int e,s;
	
	scanf("%d%d",&s,&e);
	for(n=s;n<=e;n++)
	{
		temp=n;
		sum=0;
	while(temp>0)
	{
    r=temp%10;
    sum=sum+(r*r*r);
    temp=temp/10;
    }
if(sum==n)
printf("%d ",n);
    }
}
