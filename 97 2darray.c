 #include <stdio.h>
 #include <string.h>
 int main()
 {
     char saarc[7][15] = {"Bangladesh", "India", "Pakistan", "Sri Lanka",
"Nepal", "Bhutan", "Maldives"};
     int row, col, name_length;
     for (row = 0; row < 7; row++)
        {
         name_length = strlen(saarc[row]);
         for(col = 0; col <name_length; col++)
         //for(col = 0; col <100; col++)
         {
             printf("%c ", saarc[row][col]);
         }
         printf("\n");
     }
     return 0;
 }
