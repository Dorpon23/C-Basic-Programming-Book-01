 #include <stdio.h>
 #define pi 3.1416
 double circale(double r)
 {
    double A=pi*(r*r);
    return A;
 }
 int main()
 {
     double r, radius;
     printf("Enter RADIUS:");
     scanf("%lf",&radius);
     r=circale(radius);
     printf("r=%lf",r);

     return 0;
 }
