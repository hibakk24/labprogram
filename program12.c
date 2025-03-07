#include<stdio.h>
int main()
{
int n,arr[20],i,j,num,isPrime;
printf("enter one number of element");
scanf("%d",&n);
printf("enter %d elements :\n",n);
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("prime number in the array are:");
for(i=0;i<n;i++)
{
num=arr[i];
isPrime=1;
if(num<=1)
{
isPrime=0;
}
else
{
for(j=2;j*j<=num;j++)
{
if(num%j==0)
{
isPrime=0;
break;
}
}
}
if(isPrime)
{
printf("%d",num);
}
}
printf("\n");
return 0;
}

