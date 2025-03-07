#include<stdio.h>
int main()
{
float basic,bonus,commission,totalsales,totalsalary;
int itemsold;
printf("Enter the Basic Salary:");
scanf("%f",&basic);
printf("Enter the Bonus per item Sold:");
scanf("%f",&bonus);
printf("Enter the commission percentage:");
scanf("%f",&commission);
printf("Enter the Number of Items Sold:");
scanf("%d",&itemsold);
printf("Enter the Total Monthly sales:");
scanf("%f",&totalsales);
bonus=itemsold*bonus;
commission=(commission/100)*totalsales;
totalsalary=basic+bonus+commission;
printf("The Total Salary of the salesman is:%.2f\n",totalsalary);
return 0;
}
