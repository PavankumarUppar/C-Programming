#include<stdio.h>
#include<math.h>
main()
{
    int x, x1, y, y1;
    float distance=0.0;
    printf("Enter the x and y coordinates of two points :: ");
    scanf("%d%d%d%d",&x,&x1,&y,&y1);
    distance= sqrt(pow((x1-x),2)+pow((y1-y),2));
    printf("Distance =%f",distance);
    return 0;
}
