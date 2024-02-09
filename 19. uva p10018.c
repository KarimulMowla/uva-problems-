#include <stdio.h>
int main()
{
    int t,i;
    long num,a,reverse;
    scanf("%d",&t);
        while(t--) 
        {
        scanf("%ld",&num);
           int count=0;
           while(1)
          {
              a=num;
            reverse=0;
            while(num!=0)
            {
               reverse=reverse*10+num%10;
               num=num/10;
            }
            if(reverse==a)
            break;
            else
            {
               num=reverse+a;
               count++;
            }
          }
         printf("%ld %ld\n",count,a);
        }
    
    return 0;
}