#include<stdio.h>
int main()
{
    char ch='W';
    if(ch>='a'&& ch<='z')
    {
        printf("Leter is lower case %c",ch);
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("Leter is UPPER case %c",ch);
    }
}
