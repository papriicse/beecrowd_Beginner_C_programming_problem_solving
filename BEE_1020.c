#include<stdio.h>
int main()
{
    int years,months,days,n,y;
    scanf("%d",&n);
    years=n/365;
    y=n-(years*365);
    months=y/30;
    days=y-(months*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);
    return 0;

}
