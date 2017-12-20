#include<stdio.h>
int main(void)
{
	char ch[100];
	int i,k,a[10],l=0,j;
	scanf("%s",ch);
	
	for(k=0;ch[k]!='\0';++k)
	{
		
	}
	for(i=0;i<k;i++)
	{
		if(ch[i]=='I')
		{
		a[i]=1;}
		else if(ch[i]=='V'){
		a[i]=5;}
		else if(ch[i]=='X')
		{
		a[i]=10;}
	}
	l=a[0];
	for(j=0;j<k-1;j++)
	{
		if(a[j]<a[j+1])
		{
		l=a[j+1]-l;
		}
		else 
		{
			l=l+a[j+1];
			}
	}
	printf("%d",l);
	return 0;
	
}
