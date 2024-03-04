#include <stdio.h>
int main()
{
    int i=1;
    top:
    printf("%d\t",i);
    i++;
    if(i<5)
    goto top;//lebel is calling here
    return 0;
}