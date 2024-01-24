#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a, b, c, ans = 0;
        scanf("%d", &n);
        while(n--){
            scanf("%d %d %d", &a, &b, &c);
            ans += a*c;
        }
        printf("%d\n", ans);
    }
    return 0;
}
