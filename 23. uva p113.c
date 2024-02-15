#include <stdio.h>
#include <math.h>
int main()
 {
     double n,p,k;
     while(scanf ("%lf\n%lf",&n,&p)!=EOF)
     {
        k=pow(p,1/n);
        printf ("%.00lf\n",k);
     }
  return 0;
}