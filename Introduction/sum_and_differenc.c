// Problem- Sum and Difference of two Num.
// Platform- Hackerrank
// Language - c
#include <stdio.h>


int main()
{
	int a,b,x,y;
    float c,d,p,q ;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    x = a+b;
    y = a-b;
    p = c+d;
    q= c-d;
   printf("%d %d\n",x,y);
   printf("%.1f %.1f",p,q);
    return 0;
}