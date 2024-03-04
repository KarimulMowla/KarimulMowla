//write a programme that can take some numbers and display minimum
#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("how many numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int min = num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("minimum number is : %d",min);


   getch() ;
}
