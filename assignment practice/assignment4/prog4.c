#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a[100],q,freq[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<=9;q++)
	{
		freq[q]=0;
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>=0&&a[i]<=9)
	freq[a[i]]++;
	}
	for(q=0;q<=9;q++)
	{
	if(freq[q]==1)
	{
	printf("%d",q);
	}
	}
	return 0;
}
