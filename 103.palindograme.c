#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],rev_word[100];
    int i,j,len,n;
    scanf("%s",word);
    len=strlen(word);
    for(i=0;i<len;i++)
    {
        printf("%c",word[i]);
    }
    printf("\n");

    n=0;
    for(j=len-1;j>=word[i];j--)
    {
         rev_word[n]=word[j];
         n++;
    }
    rev_word[n]='\0';
   // printf("%c",rev_word[n]);
    printf("%s",rev_word);
    printf("\n");

      if (0 == strcmp(word, rev_word))
        {
         printf("%s is a palindrome.\n", word);
        }
     else
    {
         printf("%s is not a palindrome.\n", word);
     }


}
