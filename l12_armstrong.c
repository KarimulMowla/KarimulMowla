#include <stdio.h>
int main()
{
    int num,r,t,sum=0;
    printf("enter a number : ");
    scanf("%d",&num);
    t=num;
    while(t!=0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    if(sum==num)
    printf("Armstrong");
    else
    printf("Not Armstrong");

    return 0;
}