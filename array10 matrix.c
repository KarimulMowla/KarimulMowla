#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n,c,d,g[10][10];
    printf("enter row & collumn: ");
    scanf("%d",&n);
    {
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c=2*a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            d=3*b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            g[i][j]=c+d;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
}

