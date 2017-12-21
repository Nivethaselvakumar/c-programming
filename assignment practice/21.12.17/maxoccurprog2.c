#include <stdio.h>

int main(void) {
	int k,i,freq[100],temp;
char ch[100];
scanf("%s",ch);
for(k=0;ch[k]!='\0';++k)
{
	
}
for(i=0;i<26;i++)
{
	freq[i]=0;
	
}
for(i=0;i<k;i++)
{
	if(ch[i]>='a'&&ch[i]<='z')
	freq[ch[i]-97]++;

}
temp=0;
for(i=0;i<26;i++)
{

if(freq[i]>freq[temp])
{
	temp=i;
	
}
}


printf("%c",temp+97);

	return 0;
}
