#include<stdio.h>
int main(void)
{
	int a[10],i,n,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<(n-1);)
	{
		p=a[i];
		i=i+p;
	}
	if(i==(n-1))
	printf("true");
	else
	printf("false");
	return 0;
}
