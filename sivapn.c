#include<stdio.h>
main()
{
int base,exponent;
long long result=1;
printf("enter base number:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base
}
printf("answer=%d",result);
return 0;
}

