#include <stdio.h>
int main()
{
    int array[10], position, i, n;
    printf("Enter the number of elements in array :: ");
    scanf("%d", &n);
    printf("Enter %d elements \n", n);
    for (i = 0; i < n;i++)
        scanf("%d", &array[i]);
    printf("Enter the location where you wish to delete element :: ");
    scanf("%d", &position);
    if (position >= n+1)
    printf("Deletion not possible.\n");
    else
    {
        for (i = position; i < n - 1; i++)
            array[i] = array[i+1];
            printf("Resultant array:\n");
        for (i = 0; i < n - 1; i++)
            printf("%d ", array[i]);
    }
    return 0;
}
