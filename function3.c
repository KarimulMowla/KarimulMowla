#include<stdio.h>
int sum (int a,int b,int c)
{
    printf("the sum is : %d\n",a+b+c);
}

int main()
{
    int num1,num2,num3;
    printf("enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum(num1,num2,num3);
    sub(num1,num2,num3);
}
int sub(int a,int b,int c)
{
    printf("the substraction is : %d\n",a+b-c);
}
