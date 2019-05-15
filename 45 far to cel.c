#include<stdio.h>
int main()
{
    double farenhight,celcious;
    printf("Enter celcioous");
    scanf("%lf",&celcious);
    farenhight=(celcious*1.8)+32;
    printf("Tempratuer in farenhight: %0.1lf\n",farenhight);

    return 0;
}
