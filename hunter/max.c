#include<stdio.h>
int main(void)
{
int arr[50],i,n,max;

scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
max=arr[0];
if(arr[i]>arr[0])
{
max=arr[i];
}
}
printf("%d",max);
return 0;
}



