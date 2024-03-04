#include <stdio.h>
int main()
{
    int num,temp,rem,sum=0,fact,i;
    printf("enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=rem;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    } 
    //printf("an %d",sum);
    if(sum==num)
    {
        printf("%d is a Strong Number",num);
    }
    else
    printf("%d is not a Strong Number",num);
    return 0;
}