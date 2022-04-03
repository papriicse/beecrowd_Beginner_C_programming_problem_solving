#include<stdio.h>
int main()
{
    int n,hundred,fifty,twenty,ten,five,two,one;
    scanf("%d",&n);
    printf("%d\n",n);
    hundred=n/100;
    n=n-(hundred*100);
    fifty=n/50;
    n=n-(fifty*50);
    twenty=n/20;
    n=n-(twenty*20);
    ten=n/10;
    n=n-(ten*10);
    five=n/5;
    n=n-(five*5);
    two=n/2;
    n=n-(two*2);
    one=n/1;

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",hundred,fifty,twenty,ten,five,two,one);
    return 0;

}
