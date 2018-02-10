#include <stdio.h>

int main(void) {
	// your code goes here
int i,k,n,a[100],b[100],j,temp,l=3;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	
	b[i]=a[i]-k;

}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(b[i]>b[j])
		{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
}
}
}
for(i=0;i<l;i++)
{
if(b[i]==0)
{
	l++;
b[i]=b[i+1];
b[i+1]=b[i+2];
l--;
}

printf("%d\n",(b[i]+k));
}
	return 0;
}
