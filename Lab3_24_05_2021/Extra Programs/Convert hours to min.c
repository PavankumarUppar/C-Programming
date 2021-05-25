#include <stdio.h>
int main()
{
	int h,m;
	printf("Enter hours :: ");
	scanf("%d",&h);
	printf("Enter minutes :: ");
	scanf("%d",&m);
	int m1, x = m%60;
	if(m>60)
	{
	m1 = m/60;
	h+=m1;
	}
	printf("%d hours %d mins \n",h,x);
}
