#include<stdio.h>
void sum (int a,int b,int c)
{
    printf("the sum is : %d\n",a+b+c);
}

int main()
{
    sum(23,7,10);
    sub(23,7,10);
}
void sub(int a,int b,int c)
{
    printf("the substraction is : %d\n",a+b-c);
}
