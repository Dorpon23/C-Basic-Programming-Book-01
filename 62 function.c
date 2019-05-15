#include<stdio.h>
int get(int a[])
{
    int n=4;
    int c=0;
    int i;
    for (i=0;i<n;i++)
    {
    c=c+a[i];
    }
    return c;

}
int main()
{
    int a[]={23,12,45,78};
    int d;
    d=get(a);
    printf("%d",d);
    return 0;
}
