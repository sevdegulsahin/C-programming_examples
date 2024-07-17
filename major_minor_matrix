#include <stdio.h> //major ve minor

int main() {
  int i,j,size;
    printf("enter the size of the square matrix(x<10)");
    scanf("%d",&size);
    int matrix[size][size];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=0;
        }
    }
    for(i=0;i<size;i++){
      matrix[i][i]=1; //major
      matrix[i][size-i-1]=1; //minor-1 dedik cunku 0 dan basliyor
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%5d",matrix[i][j]);
        }
        printf("\n \n");
    }
    return 0;
}
