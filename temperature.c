#include<stdio.h>
 void main ()
{
     float Celsius,Fahrenheit;  
     printf("The temperature in Celsius: ");
     scanf("%f",&Celsius);
     Fahrenheit=(Celsius*9/5)+32;
     printf("The temperature in Fahrenheit: %.1f",Fahrenheit);
     
}