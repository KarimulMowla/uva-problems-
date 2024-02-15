#include <stdio.h>
int main()
{
    int h,i, avg, a[1000], ans, count = 1;
    while (scanf("%d", &h)==1&& h!=0)
    {
        int sum = 0;
        for ( i = 0; i < h; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        avg = sum / h;
        ans = 0;
        for ( i = 0; i < h; i++)
        {
            if (a[i] > avg)
                ans += a[i] - avg;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", count++, ans);
    }
    return 0;
}