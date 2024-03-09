#include <stdio.h>
int main()
{
    float marks;
    printf("enter your marks ");
    scanf("%f",&marks);
    if (marks >=80)
        printf("A+");
    else if (marks >= 75)
    {
        printf("A");
    }
    else if (marks >= 70)
    {
        printf("A-");
    }
    else if (marks >= 65)
    {
        printf("B");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}