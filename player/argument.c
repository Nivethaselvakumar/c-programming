#include<stdio.h>
int main(int argc,char*argv[])
{
if(argc==3)
{
printf("The arguments supplied are %s %s",argv[1],argv[2]);
}
else if(argc<3)
printf("one more argument required");
else
printf("too many arguments present");
}
