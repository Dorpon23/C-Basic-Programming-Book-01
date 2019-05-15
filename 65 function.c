#include<stdio.h>
double get(double x,double y);
int main()
{
    double a=2.8;
    double b=2.7;
    double d;
    d=get(a,b);
    printf("%lf",d);
    return 0;
}
double get(double a,double b)
{

    double c=(a+b);
    return c;

}



