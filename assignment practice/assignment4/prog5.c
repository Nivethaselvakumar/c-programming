#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,freq[100],q,count=0,b[100],min=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<99;q++)
	{
		freq[q]=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<=99)
		{
			freq[a[i]]++;
		}
	}
	for(q=0;q<99;q++)
	{
		if(freq[q]>1)
		{
			b[count]=q;
			count++;
		}
	}
	if(count==0)
	{
		printf("unique");
	}
	else
	{
	for(i=0;i<count;i++)
	{
		min=b[0];
		if(b[i]<min)
		{
			min=b[i];
		}
		
	}
	printf("%d",min);
	}
	return 0;
}
