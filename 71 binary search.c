#include<stdio.h>
int main()
{
     int ara[]={1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
     int low_index=0;
     int high_index=15;
     int num=97;
     int mid_index;
     while(low_index<=high_index)
     {
      mid_index=(low_index+high_index)/2;
         {
         if(num==ara[mid_index])
         {

           break;
         }
        }

      if(num>ara[mid_index])
      {
          low_index=mid_index+1;
      }
      else if(num<ara[mid_index])
      {
         high_index=mid_index-1;
      }

    }

      if(low_index>high_index)
      {
         printf("%d number is not found",num);
      }
      else
      {
         printf("%d array is found and it is %d th element",mid_index,ara[mid_index]);
      }
      return 0;

}
