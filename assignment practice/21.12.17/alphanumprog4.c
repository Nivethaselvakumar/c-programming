#include <stdio.h>

int main(void) {
	int i,n,num=0,alpha=0;
char ch[100];
scanf("%d",&n);
scanf("%s",ch);

for(i=0;i<n;i++)
{
if(ch[i]>='a'&&ch[i]<='z')
alpha++;
else if(ch[i]>='A'&&ch[i]<='Z')
alpha++;
else if(ch[i]>='0'&&ch[i]<='9')
num++;
}
printf("%d\n",alpha);
printf("%d\n",num);
	return 0;
}
