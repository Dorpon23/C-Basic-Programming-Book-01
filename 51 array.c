#include<stdio.h>
int main()
{
int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int i;
for(i=0;i<=9;i++)
{
    printf("%d=%d\n",i+1,ara[i]);

}
printf("Second element=%d\n",ara[1]);
}