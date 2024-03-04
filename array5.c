#include<stdio.h>
int main()
{
    int n,a[10],i,sum=0;
    printf("how many numbers you want to input: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is : %d\n",sum);
    printf("the average  is : %.2lf",(float)sum/n);


}
