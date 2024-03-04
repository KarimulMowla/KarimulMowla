#include <stdio.h>
int main()
{
    int num,count;
    printf("enter a number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        num=num/10;
        ++count;
    }
    
    
    printf("total number of digits : %d",count);
    return 0;
}