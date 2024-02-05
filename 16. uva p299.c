#include<stdio.h>
int main()
{
    int N,i,j,L,temp,a[1000],swap;
    while(scanf("%d",&N)!=EOF)
    {
        while(N--)
        {
            swap=0;
            scanf("%d",&L);
            for(i=0; i<L; i++)
                scanf("%d",&a[i]);

            for(i=0; i<L-1; i++)
                for(j=0; j<L-i-1; j++)
                    if(a[j]>a[j+1])
                    {
                        swap++;
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
            printf("Optimal train swapping takes %d swaps.\n",swap);
        }
    }
    return 0;
}