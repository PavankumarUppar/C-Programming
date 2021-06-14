#include<stdio.h>
int main()
{
    int m, n, i;
    printf("Enter The Range M to N :: ");
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("  %d\t",i);
        }

    }
    return 0;
}
