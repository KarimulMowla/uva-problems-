#include <stdio.h>
int main()
{
    long long int a, b;
    while(scanf("%lld %lld", &a, &b)==2) 
    {
        if(a==0 && b==0)
            break;
        int carry=0;
        int count=0;
        while(a>0||b>0) {
            carry=((a%10)+(b%10)+carry)/10;
            a=a/10;
            b=b/10;
            count+=carry;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if (count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}