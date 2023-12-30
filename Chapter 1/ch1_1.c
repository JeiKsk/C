//JEISWARUBAN_21096
#include<stdio.h>
int main()
{
    int a,b,sal,gross;
    printf("Enter the salary :");
    scanf("%d",&sal);
    a=(sal/100)*20;
    b=(sal/100)*40;
    gross=sal+a+b;
    printf("Gross Salary = %d",gross);
    return 0;
}