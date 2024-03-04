#include <stdio.h>
int main()
{
    int number,reminder,temp,sum=0;
    printf("Enter any number : ");
    scanf("%d",&number);
    temp=number;
    while (temp!=0)
    {
        reminder=temp%10;
        sum=sum*10+reminder;
        temp=temp/10;
    }
    printf("Reverse of the Number is : %d",sum);
    return 0;
}