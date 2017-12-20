#include<stdio.h>
int main(void)
{
	int arr[100];
	int i,n,k,temp,j;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);

	}
	for(i=0;i<k;i++)
	{
		temp=arr[0];
		for(j=0;j<n;j++)
		{
		arr[j]=arr[j+1];}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
return 0;
}
