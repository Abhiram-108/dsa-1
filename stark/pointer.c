#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, res;
        scanf("%d%d%d", &x, &y, &z);
        if (x % y == 0)
            printf("\n%d", x / y);
        else if (x == z)
            printf("\n%d", x - z + 1);
        else if (y == 1)
        {
            res = (x - z) + 1;
            printf("\n%d", res);
        }
        else
        {
            if ((x % y) != 0 && (x - z) != 0)
                res = x - z;
            if (res <= x)
            {
                res += y;
            }
            printf("\n%d", res);
        }
    }
        return 0;
}
