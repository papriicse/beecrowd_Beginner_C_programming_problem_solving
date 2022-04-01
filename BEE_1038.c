#include<stdio.h>
int main()
{
    int X,Y;
    float z;
    scanf("%d %d",&X,&Y);
    if(X==1)
    {
        z=(float)(Y*4.00);
    }
    else if(X==2)
    {
        z=(float)(Y*4.50);
    }
    else if(X==3)
    {
      z=(float)(Y*5.00);
    }
    else if(X==4)
    {
      z=(float)(Y*2.00);
    }
    else if(X==5)
    {
     z=(float)(Y*1.50);
    }
    printf("Total: R$ %0.2f\n",z);
    return 0;


}
