#include<stdio.h>
int main()
{
    int arr[10], i, j, n, num;
    printf("Enter the number of elements in array :: ");
    scanf("%d", &n);
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter the number you wish to insert an element :: ");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        if(arr[i]>num)
        {
            for(j=n-1;j>=i;j--)
                arr[j+1]=arr[j];
            arr[i] = num;
            break;
        }
    }
    printf("Resultant array after insertion of %d is \n", num);
    for(i=0;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}
