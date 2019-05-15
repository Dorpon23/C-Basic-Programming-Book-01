#include<stdio.h>
int main()
{
    int n;


    printf("Please enter number:");
    scanf("%d",&n);
    if(n==0)

    {
      printf("%d it is not prime number",n);
    }
    else if(n<2)
    {
        printf("%d it is not prime number",n);
    }

     if(n>=2)
     {

     if(n%n==0 && n%1==0)
     {
      printf("%d it is prime number",n);

     }

     else
     {
       printf("%d it is not prime number",n);
     }
     }






    return 0;
}
