#include <stdio.h>
int main()
{
    int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("%f",&x);
    y=(int)b*(float)x;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2f\n",y);
    return 0;
}
