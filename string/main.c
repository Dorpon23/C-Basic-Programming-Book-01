#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str1[] = "bangla", str2[] = "desh", str3[12];
     int i, j=0, length1 = 6, length2 = 4;
     for(i = 0; i < length1; i++)
       {
           str3[j] = str1[i];
            //str3[j] = str2[i];

           j++;

       }
     for(i = 0; i < length2; i++)
        {
             str3[j] = str2[i];
           j++;
        }
     str3[j] = '\0';
     printf("%s\n", str3);
     return 0;
}
