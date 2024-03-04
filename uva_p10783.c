#include <stdio.h>
int main()
{
    int a, b, i, j = 0, sum, t;
    scanf("%d", &t);
    while (t--)
    {
        int sum = 0;
        scanf("%d%d", &a, &b);
        for (i = a; i <= b; i = i + 2)
        {
            if (i % 2 == 0)
                i++;
            sum = sum + i;
        }
        printf("Case %d: %d\n", j, sum);
        j++;
    }

    return 0;
}