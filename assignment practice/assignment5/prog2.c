#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,k,a[100],j,temp;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
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

	printf("%d",a[n-k]);
	return 0;
}
