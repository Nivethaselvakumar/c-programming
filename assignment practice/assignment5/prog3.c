#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char ch[100];
	gets(ch);
	int j,i,k;
	char temp;
	int p;
	k=strlen(ch);
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			temp=ch[i];
			ch[i]=ch[j];
			ch[j]=temp;
			printf("%s\n",ch);
		}
	}
		
		for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(ch[i]<ch[j])
			{
			temp=ch[i];
			ch[i]=ch[j];
			ch[j]=temp;
			}
		}
	}
	
		for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			temp=ch[i];
			ch[i]=ch[j];
			ch[j]=temp;
			printf("%s\n",ch);
		}
	}
	return 0;
}
