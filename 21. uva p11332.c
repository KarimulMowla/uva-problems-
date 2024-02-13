#include <stdio.h>
int main()
{
    int num,sum;
    while(scanf ("%lld",&num) == 1 && num != 0)
    {

        while(1)
        {
            sum=0;
            while(num!=0)
            {
                sum=sum+num%10;
                num=num/10;
            }
            if (sum<10)
                break;
            else
                num=sum;
        }
        printf ("%d\n",sum);
    }
    return 0;
}