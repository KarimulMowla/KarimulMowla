#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter first numnber "); 
    scanf("%d",&num1);
    printf("enter second number ");
    scanf("%d",&num2);
    if(num1>num2)
        printf("large = %d",num1);
    else if (num1<num2)
    {
        printf("large = %d",num2);
    }
    else printf("numbers are equal\n");
    return 0;
}