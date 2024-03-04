#include <stdio.h>
int main()
{
    int number,reminder,sum=0,temp;
    printf("enter a number : ");
    scanf("%d",&number);
    temp=number;//temp=abs(number)
    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum*10+reminder;
        temp=temp/10;
    }
   // printf("%d\n",sum);
    if (number==sum)
        printf("palindrome");
    else
    printf("Not Palindrome");
    return 0;
}