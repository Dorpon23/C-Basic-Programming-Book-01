#include<stdio.h>
int main()
{
    int n,a,i;
    printf("Decimal value:\n");
    while(scanf("%d",&n)==1)
    {
    printf("Decimal to binary value:\n");
    while(n!=0)
    {
        a=n%2;
        n=n/2;

         printf("%d",a);
    }
    }


}
