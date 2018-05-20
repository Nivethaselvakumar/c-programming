#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,temp,j,count=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			count++;
		for(l=j;l<n;l++)
				{
				a[l]=a[l+1];
				}
				n--;
				j--;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(count==0)
	{
	printf("unique");
	}
	else
	{
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	}
	return 0;
}
