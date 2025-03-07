#include<stdio.h>
int main()
{
int num,temp,rem,sum=0;
printf("enter a three digit integer:");
scanf("%d",&num);
while(temp!=0)
{
rem=temp%10;
sum+=rem*rem*rem;
temp/=10;
}
if(sum==num)
printf("%d is an armstrong number.",num);
else
printf("%d is not an armstrong number.",num);
return 0;
}
