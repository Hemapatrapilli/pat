#include<stdio.h>
main()
{

int i,j,count=0,nc=0,a,b;
int x;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
	x=0;
	for(j=2;j<=i;j++)
	{
		if(i%j==0)
          x=1;
          break;
}
	if(x==0)
     count++;
}
     printf("%d",count);

}
