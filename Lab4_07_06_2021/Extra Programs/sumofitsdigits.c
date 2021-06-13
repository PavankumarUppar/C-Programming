#include<stdio.h>
int func(int n);
void main()
{
    int n;
    printf("Enter The Number :: ");
    scanf("%d",&n);
    func(n);
}
int func(int n)
{
    int sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of Digits Is :: %d",sum);
    return 0;
}
