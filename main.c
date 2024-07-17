#include <stdio.h>

int main() {
  int row,column,i,j;
    printf("enter number of rows");
    scanf("%d",&row);
    printf("enter number of columns");
    scanf("%d",&column);
   int  matrix[row][column];
   for(i=0;i<row;i++){
       for(j=0;j<column;j++){
           printf("\n matrix[%d][%d]=",i,j);
           scanf("%d",&matrix[i][j]);
       }
   }
    printf("your array\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%4d",matrix[i][j]);

        }
        printf("\n \n");
    }
    return 0;
}
