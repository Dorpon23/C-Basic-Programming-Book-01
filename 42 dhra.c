#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("i=%d\n",i);
    }
        printf("sum=%d\n",sum);

    return 0;
}
