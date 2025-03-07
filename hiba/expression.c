#include<stdio.h>
#include<math.h>
int main()
{
double x,y,z,w,result;
printf("enter value for x:");
scanf("%1f",&x);
printf("enter value for y:");
scanf("%1f",&y);
printf("enter value for z:");
scanf("%1f",&z);
printf("enter value for w:");
scanf("%1f",&w);
result=(pow(x+y,2)*(x+z))/w;
printf("the result is:%.21f\n",result);
return 0;
}
