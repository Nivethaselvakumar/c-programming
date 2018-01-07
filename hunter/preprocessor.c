#include<stdio.h>
#define TOP 3
int main(void)
{
int n=7,a[100],i;
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=TOP;i>0;i--)
{
	printf("%d\n",a[i]);
}
return 0;
}
