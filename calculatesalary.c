#include<stdio.h>
#include<math.h>
void main()
{
    float BS,salary,hra,da,ta;
    printf("Enter your base salary: ");
    scanf("%f",&salary);
    printf("Enter the HRA: ");
    scanf("%f",&hra);
    printf("Enter the DA: ");
    scanf("%f",&da);
    printf("Enter the TA: ");
    scanf("%f",&ta);
    BS=salary+(hra)/100,(da)/100,(ta)/100;
    
}