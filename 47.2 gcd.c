#include<stdio.h>
int main()
{
    int n1,n2;
    while(scanf("%d %d",&n1,&n2)==2){
    if(n1>n2){
    n2=n1%n2;
    while(n2!=0){
        if(n1>n2){
          n1=n2;
        }
        else{
          n2=n1;
        }
   printf("%d",n2);
   break;}}
    else{
    n1=n2%n1;
    while(n1!=0){
        if(n2>n1){
          n2=n1;
        }
        else{
          n1=n2;
        }
   printf("%d",n1);
   break;}}}

}
