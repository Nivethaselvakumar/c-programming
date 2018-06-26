#include <stdio.h>
#include<string.h>
int top=-1,count=0,flag[100],temp=0,zap=0;
int size=10,stack[100],i;

void push(char s)
{
	if(top==size-1)
	printf("overflow");
	else
	{
	top++;
	stack[top]=s;
	}
}
void check()
{
	for(i=0;i<=top;i++)
	{
	if(stack[i]==stack[top-i])
	{
	flag[count]=1;
	count++;
	}
	else
	{
		flag[count]=0;
		count++;
	}
	}
	
	
	
	for(i=0;i<count;i++)
	{
		if(flag[i]==1)
		temp++;
	}

	if(temp==count)
	printf("yes");
	else
	printf("no");
}
int main(void) {
	// your code goes here

	char s[100];
	gets(s);
	int k=strlen(s);
	for(int j=0;j<k;j++)
	{
		push(s[j]);
	}
	check();
	return 0;
}
