#include <stdio.h>

int main(void) {
	// your code goes here
int i,n,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(i==a[i])
	{
		printf("%d\t",a[i]);
	}
}
	return 0;
}
