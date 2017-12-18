#include<stdio.h>
int a=0;
void func();
int main()
{
int count=0;
printf("%d",count);
do
{
int d=1;

printf("%d",d);
}
while(++count<=0);

func();
}
void func()
{
printf("%d",a);
}


