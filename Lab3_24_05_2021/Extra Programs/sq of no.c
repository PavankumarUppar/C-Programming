#include<stdio.h>
#include<math.h>
int sq(int n);
int main()
{
	int n;
	printf("Enter the number :: ");
	scanf("%d",&n);
	int s = sq(n);
	printf("Square of the number :: %d\n",s);
}
    int sq(int n)
    {
        return (int)pow(n,2);
    }
