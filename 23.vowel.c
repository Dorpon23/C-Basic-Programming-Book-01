#include<stdio.h>
int main()
{
    char ch;
    //scanf("%c",&ch);
    ch=getchar();
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel %c",ch);
    }
    else
    {
        printf("conostant %c",ch);
    }
}
