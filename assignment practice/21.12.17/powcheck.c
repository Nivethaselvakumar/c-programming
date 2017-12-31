#include<stdio.h>
int main(void)
{
	int n,x=1,pow=2,i,count=0,a;
	scanf("%d",&n);
	a=n;
	while(n!=1)
	{
	n=n/2;
	count++;
	}
	
	for(i=0;i<count;i++)
	{
		x=x*pow;
	}
	
	if(x==a)
	printf("yes");
	else
	printf("no");
	return 0;
}
