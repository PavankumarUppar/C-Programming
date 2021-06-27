#include<stdio.h>
int main()
{
    int arr[10], pos, i, n, value;
    printf("Enter the number of elements in array :: ");
    scanf("%d", &n);
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the location where you wish to insert an element :: ");
    scanf("%d",&pos);
    printf("Enter the value to insert :: ");
    scanf("%d",&value);
    for(i=n-1;i>=pos;i--)
        arr[i+1]=arr[i];
    arr[pos]=value;
    printf("Resultant array is \n");
    for(i=0;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}
