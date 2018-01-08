#include <stdio.h>

int main(void) {
	int n,i,j,m,c,d;
	int a[100],b[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]%2)!=0)
		c=a[i];
	}
	printf("%d\n",c);
	for(j=0;j<m;j++)
	{
		if((b[j]%2)==0)
	d=b[j];
	}
		printf("%d\n\n",d);
	return 0;
}
