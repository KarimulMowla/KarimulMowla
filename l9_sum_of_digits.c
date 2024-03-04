#include <stdio.h>
int main()
{
    int number,reminder,temp,sum=0;
    printf("enter any number : ");
    scanf("%d",&number);
    temp=number;
    while (temp!=0)
    {
        reminder=temp%10;
        sum=sum+reminder;
        temp=temp/10;
    }
    printf("Sum OF Digits = %d",sum);
    
}