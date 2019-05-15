#include <stdio.h>
#include <stdlib.h>
int SieveOfEratosthenes(int n)
{
    int i,j;
    //int ara[n];
   // int c=ara[n];
    for(i=2;i<=n;i++)
    {
        int c=n%i;
        if(c==0)
        {
             //printf("%d\n",i);
             for(j=i;j<=i;j++)
             {
                 if(j%i==1)
                  printf("%d\n",j);
             }

        }

    }

        return 0;

}

int main()
{
    int n;
    printf("Following are the prime numbers smaller than or equal to ");
    scanf("%d",&n);
    SieveOfEratosthenes(n);
    return 0;
}

