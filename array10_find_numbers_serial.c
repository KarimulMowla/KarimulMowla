#include<stdio.h>
int main()
{
    int num[100],value,pos=-1,i,n;

    printf("how many numbers : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("values are : ");
        scanf("%d",&num[i]);
    }
    printf("enter value : ");
    scanf("%d",&value);

    for(i=0;i<=n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    printf("item is not found");

    else{
        printf("the value is found at %d",pos-1);
        }

}
