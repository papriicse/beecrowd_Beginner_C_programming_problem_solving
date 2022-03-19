
#include<stdio.h>
int main()
{
    int a1,b1,a2,b2;
    float c1,c2,d;
    scanf("%d %d %f %d %d %f",&a1,&b1,&c1,&a2,&b2,&c2);
    d=(b1*c1+b2*c2);
    printf("VALOR A PAGAR: R$ %0.2f\n",d);
    return 0;
}
