#include<stdio.h>
int main()
{
    int num[100]={10,20,30,40,50,60},value,pos=-1,i;
    printf("enter value : ");
    scanf("%d",&value);

    for(i=0;i<6;i++)
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
        printf("the value is fount at %d",pos);}

}
