//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() 
{   
    float celsius, fahrenheit;   
    printf("Enter temperature in Celsius: ");   
    scanf("%f", &celsius);  
    fahrenheit = (celsius * 9.0 / 5.0) + 32;   
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
