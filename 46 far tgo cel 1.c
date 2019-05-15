#include<stdio.h>
int main()
{
    double farenhight,celcious;
    printf("Enter farenhight");
    scanf("%lf",&farenhight);
    celcious=(farenhight*1.8)-32;
    printf("Tempratuer in celcious: %0.1lf\n",celcious);

    return 0;
}

