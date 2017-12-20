#include <stdio.h>

int main(void) {
	int i,j,k;
	char temp;
	char ch[10];

scanf("%s",ch);
 for(k=0;ch[k]!='\0';++k)
{
}

  
    if(k%2==0){
for(i=0;i<k;i+=2)
{
	temp=ch[i];
	ch[i]=ch[i+1];
	ch[i+1]=temp;
}
printf("%s",ch);
}
else
{
	for(i=0;i<(k-1);i+=2)
{
	temp=ch[i];
	ch[i]=ch[i+1];
	ch[i+1]=temp;
}
printf("%s",ch);
}

	return 0;
}
