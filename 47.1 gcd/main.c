#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,x,y,gcd,lcm;
    scanf("%d %d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1!=n2)
    {
        if(n2<n1)
        {
            n1=n1-n2;

        }
        else
        {
           n2=n2-n1;

        }

    }
    printf("gcd=%d\n",n1);
    gcd=n1;
    lcm=(x*y)/gcd;
    printf("lcm=%d\n",lcm);
}//GCD/HCF=Greatest common divisor
//HCF=Highest Common Factor
//LCD=Lest Common divisor
