#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002],word[100];
    int i,j=0,length,is_word_started=0;
    gets(s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {

    if(s[i]>='a' && s[i]<='z')
    {
         if(is_word_started==0)
        {
            is_word_started=1;
            {
             word[j]='A'+(s[i]-'a');
             j++;
            }
        }

          else
          {
              word[j]=s[i];
              j++;
          }
      // printf("%s",s);
    }
    else if(s[i]>='A' && s[i]<='Z')
    {
       if(is_word_started==0)

         is_word_started=1;

       word[j]=s[i];
       j++;
    }
     else if(s[i]>='0' && s[i]<='9')
    {
       if(is_word_started==0)

         is_word_started=1;

       word[j]=s[i];
       j++;
    }
    else
    {
            if(is_word_started==1)
            {
                is_word_started=0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
    }


   }
   return 0;

}
