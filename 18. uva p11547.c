#include<stdio.h>
int main()
{
    int n,t,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans=((((((n*567)/9)+7492)*235)/47)-498);
        int digits=(ans/10)%10;
        if (digits<0)
        digits=-(digits);
        printf("%d\n",digits);
    }
    return 0;
}