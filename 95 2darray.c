#include<stdio.h>
int main()
{

    int row,column,c=0;
    int namta[10][10];
    for(row=0;row<10;row++)
    {
        for(column=0;column<10;column++)
        {
            namta[row][column]=(row+1)*(column+1);
            printf("%d x %d = %d\n",(row+1),(column+1),namta[row][column]);
            if(namta[row][column]%2==0)
            {
                printf("EVEN=%d\n",namta[row][column]);
            }
            else if(namta[row][column]%2!=0)
            {
              printf("ODD=%d\n",namta[row][column]);
            }
            c=c+namta[row][column];
            printf("Totalnumber=%d\n",c);
        }

    }

}
