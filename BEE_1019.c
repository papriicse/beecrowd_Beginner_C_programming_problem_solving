#include<stdio.h>
int main()
{
    int N,hours,minutes,seconds;
    scanf("%d",&N);
    hours=N/3600;
    seconds=N-(hours*3600);

    minutes=seconds/60;
    seconds=seconds-(minutes*60);
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}

