#include<stdio.h>
int smallest(int a, int b, int c);
void main()
{
    int n1,n2,n3;
    printf("Enter the three numbers :: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    smallest(n1,n2,n3);
}
int smallest(int a, int b, int c)
{
    if(a<b && a<c)
    {
        printf("Smallest is :: %d",a);
    }
    else if(b<a && b<c)
    {
        printf("Smallest is :: %d",b);
    }
    else
    {
        printf("Smallest is :: %d",c);
    }
    return(0);
}
