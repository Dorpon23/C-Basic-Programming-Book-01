#include<bits/stdc++.h>
using namespace std;
int main(){
char s[100],s1[101];
scanf("%s",s);
int i,n,j, len;
len=strlen(s);
for(i=0;i<len;i++){
    printf("%c",s[i]);
}
printf("\n");
n=0;
for(j=len-1;j>=s[i];j--){
    s1[n]=s[j];
    n++;
}
s1[n]='\0';
printf("%s",s1);
printf("\n\n");
if(0==strcmp(s1,s)){
    printf("%s is palindrome string %s\n",s1,s);
}
else{
    printf("%s is not palindrome string %s\n",s1,s);
}
}
