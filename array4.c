#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    printf("enter numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is : %d\n",sum);
    printf("the average is : %.2lf",(float)sum/10);




}
