#include <stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("enter five numbers: ");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is : %d\n",sum);
    printf("the average is : %lf\n",(float)sum/5);


}
