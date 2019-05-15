#include<bits/stdc++.h>
using namespace std;
int main(){
     char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka",
"Nepal", "Bhutan", "Maldives"};

int i,j,name_len;
for(i=0;i<7;i++){
        name_len=strlen(saarc[i]);
    for(j=0;j<name_len;j++){
        printf("(%d %d),%c ",i,j,saarc[i][j]);
    }
    printf("\n");
}
return 0;
}
