#include <stdio.h>
int main()
{
    char a;
    int b=1.111;
    float c=1.111;
    double d=1.111;
    long e=1.111;
    long long f=1.111;
    long double g=9;

    printf("%c\n",&a);
    printf("%d\n",b);
    printf("%f\n",c);
    printf("%lf\n",d);
    printf("%ld\n",e);
    printf("%lld\n",f);
    printf("%Lf\n",g); 


    return 0;
}