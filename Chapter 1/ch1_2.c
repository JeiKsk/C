//JEISWARUBAN_21096
#include<stdio.h>
int main()
{
    float km;
    printf("Enter the distance :");
    scanf("%f",&km);
    printf("Meters = %.2f",(km*1000));
    printf("Centimeters = %.2f",(km*1000*100));
    printf("Feet = %.2f",(km*3280.8399));
    printf("Inches = %.2f",(km*39370.0787));
    return 0;
}