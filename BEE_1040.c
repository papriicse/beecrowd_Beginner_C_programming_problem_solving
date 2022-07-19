#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,avg;
    scanf("%0.1f %0.1f %0.1f %0.1f",&N1,&N2,&N3,&N4);
    avg=((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
   // printf("media: %lf\n",avg);
    if(avg>=7)
    {
        printf("Aluno aprovado");
    }
    else if(avg<5)
    {
        printf("Aluno reprovado");
    }
    else if(5<avg<6.9)
    {
        printf("Aluno em exame");
    }

printf("Media: %lf\n",avg);







}
