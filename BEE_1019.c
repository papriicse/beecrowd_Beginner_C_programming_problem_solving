#include<stdio.h>
int main()
{
    int n,a,x,y;
    scanf("%d",&n);
    a=n/3600;
    x=n/60;
    y=n-(x*60);
    printf("%d:%d:%d\n",a,x,y);
    return 0;
}

