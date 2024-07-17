#include <stdio.h> //satir ve sutunlari toplama

int main() {
    int i,j,sum;
    int matrix[5][5]={{5,3,7,0,19},{2,8,10,1,3},{6,4,1,9,0},{15,7,2,4,8},{1,14,2,3,10}};
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("\n%d. satir toplami:",i+1);
        for(j=0;j<5;j++){
            sum+=matrix[i][j];
        }
        printf("%d",sum);
        sum=0;
    }
    for(i=0;i<5;i++){
        printf("\n%d. sutun toplami:",i+1);
        for(j=0;j<5;j++){
            sum+=matrix[j][i];
        }
        printf("%d",sum);
        sum=0;
    }
    return 0;
}
