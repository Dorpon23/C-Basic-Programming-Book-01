 #include <stdio.h>
 int string_length(char str[])
 {
     /*int i, length = 0;
     for(i = 0; str[i] != '\0'; i++)
        {
         length++;
        }
     return length;*/
     int i;
     for(i = 0; str[i] != '\0'; i++);
     return i;
 }
 int main()
 {
     char country[100];
     int length;
     while(scanf("%s", country)==1)
        {
         length = string_length(country);
         printf("length: %d\n", length);
        }
     return 0;
 }


