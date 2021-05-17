#include<stdio.h>
int main()
{
    float c, x;
    printf("Enter the Fahrenheit scale\n");
    scanf("%f",&x);
    c=5*(x-32)/9;
    printf("Celsius = %f",c);
    return 0;
}
