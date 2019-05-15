#include<stdio.h>
 int is_prime(int n)
 {
   int i;
   if (n < 2)
    {
     return 0;
    }
   if(n == 2)
   {
     return 1;
   }
   if(n % 2 == 0)
   {
     return 0;
   }
   for(i = 3; i <= n / 2; i = i + 2)
   {
     if(n % i == 0)
     {
       return 0;
     }
   }
   return 1;
 }
int main()
{
    int n;
    while(1)
        {
         printf("Please enter a number (enter 0 to exit): ");
         scanf("%d", &n);
         if(n == 0)
         {
             break;
         }
         if(1==is_prime(n))
         {
             printf("%d it is prime\n",n);
         }
         else
         {
             printf("%d it is not prime\n",n);
         }
        }
        return 0;
}
/*Why some people say it's not prime: It doesn't have exactly two positive divisors.
The statement "1 is prime" is false false .
Proof: The definition of a prime number is a
positive integer that has exactly
two positive divisors. However, 1 only has one positive divisor (1 itself), so it is not prime.*/
