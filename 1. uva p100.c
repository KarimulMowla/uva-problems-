#include<stdio.h>
int main()
{
    int i,j,n,count,max,temp;
    while(scanf("%d %d", &i, &j) != EOF)
    {
        printf("%d %d ", i, j);
        if(i>j)
        {
            temp=j;
            j=i;
            i=temp;
        }
        max=0;
        while(i<=j)
        {
            count=1;
            n=i;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else if(n%2!=0)
                {
                    n=(3*n)+1;
                }
                count++;
            }
            if(count>max)
            {
                max = count;
            }
            i++;
        }
        printf("%d\n", max);
    }
    return 0;
}
