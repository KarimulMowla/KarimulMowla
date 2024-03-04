//factorial
#include <stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter a positive number : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);

}