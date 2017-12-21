#include <stdio.h>

int main(void) {
	char ch[100];
	int i,n,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch[i]);
	}
	for(i=(n-1);i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	for(i=(n-1);i>=0;i--)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		{
			
			ch[i]=ch[i+1];
			n--;
			
		}
		else
		{
			printf("%c",ch[i]);
		}
		
	}
		

	return 0;
}
