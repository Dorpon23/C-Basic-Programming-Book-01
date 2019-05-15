 #include <stdio.h>
 int main()
 {
     int arr[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
     int arr1[10];
     int i,j,temp;
          for (i=0;i<10;i++)
          {
              for(j=9;j>0;j--)
              temp=arr[i];

              arr1[j]<=arr[i];
            //  temp=arr1[j];
              arr1[j]=temp;
              //temp=arr[8];
              //arr1[8]=arr[1];
              //arr[8]=temp;

                 printf("value=%d\n",temp);
          }

 }
