#include <stdio.h>

int main(void) {
	int i,k,a[100],j,l,temp,count=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]==a[j])
			count++;
		
		}
	}
	if(count==0)
	{
	printf("unique");
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			
			if(a[i]==a[j])
			{
				for(l=j;l<k;l++)
				{
				a[l]=a[l+1];
				}
				k--;
				j--;
			}
		
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
