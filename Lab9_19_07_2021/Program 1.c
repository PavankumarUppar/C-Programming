#include <stdio.h>
int main()
{
    int num1, num2, sum,mod,mul,dif;
    int *ptr1, *ptr2;
    float divi;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
    dif=*ptr1 - *ptr2;mul=*ptr1 * *ptr2;
    divi=(float)*ptr1 / *ptr2;
    mod=*ptr1 % *ptr2;
    printf("Sum = %d\n", sum);
    printf("difference = %d\n",dif);
    printf("product = %d\n", mul);
    printf("division = %f\n", divi);
    printf("mod = %d\n", mod);
    return 0;
}
