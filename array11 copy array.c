#include<stdio.h>
int main()
{
    int array1[10],array2[10],n,i;
    printf("how many numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",array1[i]);
    }
    printf("Array1 : ");

    for(i=0;i<n;i++)
    {
        printf("%d",array1[i]);
    }


    for(i=1;1<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2 : ");

    for(i=1;i<n;i++)
    {
        printf("%d",array2[i]);
    }

}
