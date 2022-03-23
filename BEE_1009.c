#include <stdio.h>
int main()
{
    double b,c,d;
    char a;
    scanf("%S %lf %lf",&a,&b,&c);
    d=b+c*0.15;
    printf("TOTAL = R$ %0.2lf\n",d);
    return 0;
}
