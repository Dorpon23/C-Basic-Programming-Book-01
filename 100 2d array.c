#include<stdio.h>
int main()
{
    int marks[5][5]={{6, 3, 8, 2, 4},{4, 7, 6, 4, 1},{7, 1, 4, 2, 6 },{8, 9,
    2, 5, 7},{9, 9, 7, 9, 3}};
    int column;
        for(column = 0; column < 5; column++)
        {
         marks[4][column] = marks[0][column] + marks[1][column]+
marks[2][column]+marks[3][column]+marks[4][column];
      printf("sum of column %d : %d\n", column + 1, marks[4][column]);
}
return 0;
}

