#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    printf("TRIANGULO: %0.3f\n",(A*C)/2);
    printf("CIRCULO: %0.3f\n",(3.14159*C*C));
    printf("TRAPEZIO: %0.3f\n",(A+B)*0.5*C);
    printf("QUADRADO: %0.3f\n",(B*B));
    printf("RETANGULO: %0.3f\n",(A*B));
    return 0;


}
