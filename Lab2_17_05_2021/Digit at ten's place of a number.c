#include<stdio.h>
void main()
{
    int num,digit;
    printf("\n Enter the number::");
    scanf(" %d", &num);
    digit = (num/10)%10;
    printf("The digit at ten's place of %d is %d", num,digit);
    return 0;
}
