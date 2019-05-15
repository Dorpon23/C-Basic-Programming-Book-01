#include<stdio.h>
int main()
{
    int x,y,x_plus_y,x_minius_y;
    printf("Enter the value x+y:");
    scanf("%d",&x_plus_y);

    printf("Enter the value x-y:");
    scanf("%d",&x_minius_y);

    x=((x_plus_y)+(x_minius_y))/2;
    y=((x_plus_y)-(x_minius_y))/2;
    printf("value %d is\n",x);
    printf("value %d is ",y);

    return 0;
}
