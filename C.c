#include<stdio.h>
int main()
{
    int a,b,d,x,y;
    scanf("%d",&a);
    scanf("%d",&b);

    d=(a*x)+(b*y);
    y=(d-b)/a;
    x=(a/b)*y;

    printf("%d %d %d",x,y,d);

}
