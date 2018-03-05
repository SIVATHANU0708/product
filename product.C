#include<stdio.h>
int main()
{
int n,product=1,i,rem;
printf("enter the  number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
product=product*rem;
n=n/10;
}
printf("product of number is %d",product);
return 0;
}|
