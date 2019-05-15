#include<stdio.h>
int main()
{
    int marks[5][5]={{6, 3, 8, 2, 4},{4, 7, 6, 4, 1},{7, 1, 4, 2, 6 },{8, 9,
    2, 5, 7},{9, 9, 7, 9, 3}};
    int row;
        for(row = 0; row < 5; row++)
        {
         marks[row][4] = marks[row][0] + marks[row][1]+
marks[row][2]+marks[row][3]+marks[row][4];
      printf("sum of row %d : %d\n", row + 1, marks[row][4]);
}
return 0;
}
