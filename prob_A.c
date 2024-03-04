#include <stdio.h>
int main()
{
    while(1){
    int t, N, i;
    scanf("%d",t);
        {
        int ford=1;
        int suni=0;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
        ford = ford * i;
        suni = suni + i;
        }
        if(ford%suni==0)
        {
        printf("YEAH\n");
        }
        else 
        {
        printf("NAH\n");
        }
        }
    }
    return 0;
}