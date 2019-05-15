 #include <stdio.h>
 int find_max(int ara[],int n)
 {
     int maximum=ara[0];
     int i;
     for(i=1;i<n;i++)
     {
     if(ara[i]>maximum)
     {
         maximum=ara[i];
     }
     }
     return maximum;
 }
 int find_min(int ara[],int n)
 {
     int minimum=ara[0];
     int i;
     for(i=1;i<n;i++)
     {
     if(ara[i]<minimum)
     {
         minimum=ara[i];
     }
     }
     return minimum;
 }
  int find_sum(int ara[],int n)
 {

     int i;
     int c=0;
     for(i=0;i<n;i++)
     {
     c=c+ara[i];
     }
     return c;
 }
   int find_avg(int ara[],int n)
 {

     int i;
     int c=0;
     int d;
     for(i=0;i<n;i++)
     {
     c=(c+ara[i]);
     d=c/n;
     }
     return d;
 }
 int main()
 {
       int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
       int n=11;
       int max=find_max(ara, n);
       int min=find_min(ara, n);
       int sum=find_sum(ara, n);
       int avg=find_avg(ara, n);
       printf("%d\n",max);
       printf("%d\n",min);
       printf("%d\n",sum);
       printf("%d\n",avg);
       return 0;

 }

