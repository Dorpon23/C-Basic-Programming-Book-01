#include<stdio.h>
int SieveOfEratosthenes(int n)
{
   int i;
   int ara[50];
   for(i=0;i<n;i++)
    {
      printf("Enter ara[%d]:",i);
      scanf("%d",&ara[i]);
     if(ara[n]%ara[i]==0)
        {
            printf("%d",ara[i]);
        }
    }
   /* for(i=0;i<n;i++)
    {
        if(ara[n]%ara[i]==0)
        {
            printf("%d",ara[i]);
        }
    }*/

}
int main()
{
    int n;
    printf("Following are the prime numbers smaller than or equal to ");
    scanf("%d",&n);
    SieveOfEratosthenes(n);
    return 0;
}
