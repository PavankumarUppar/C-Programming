#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter The Number :: ");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        if(i%n==0)
        printf(" %d\n",i);
    }

}
