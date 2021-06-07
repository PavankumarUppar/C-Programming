#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, root1, root2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;
    if(d>0)            //real&different
        {
            root1 = (-b+sqrt(d))/(2 * a);
            root2 = (-b-sqrt(d))/(2 * a);
            printf("Root1 = %.2f & Root2 = %.2f", root1, root2);
        }
    else if(d == 0)      //equal&real
        {
            root1 = root2 = -b/(2 * a);
            printf("root1 = root2 = %.2f;", root1);
        }
    else                 //not real
        {
            real = -b/(2 * a);
            imag = sqrt(-d)/(2 * a);
            printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", real, imag, real, imag);
        }
    return 0;
}

