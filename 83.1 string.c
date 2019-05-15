#include<stdio.h>
int main()
{
    char name[10];
    int i=0;
    printf("Enter a String:");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        printf("%c is stored %u\n",name[i],&name[i]);
        i++;
    }//%u unsigned number stored
    //%p unsigned hexadecimal number stored
    return 0;
}
