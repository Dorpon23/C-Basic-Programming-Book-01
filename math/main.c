#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i;
     int total_marks[] = {86, 86, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
62, 66, 76, 70, 67, 1, 1, 100};
     int marks_count[101], t_m;
      for(i = 0; i < 101; i++)
     {
         marks_count[i]=0;
      }

     for(i = 0; i < 40; i++)
        {
        // marks_count[total_marks[i]]++;
         t_m = total_marks[i];
         marks_count[t_m]++;
     }

     for(i = 50; i <= 100; i++)
     {
         printf("Marks: %d Count: %d\n", i, marks_count[i]);
     }
    return 0;
}
