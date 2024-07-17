#include <stdio.h> //3 * 2 rastgele elemanlardan oluşan bir dinamik dizi oluşturunuz. Bu dizinin
//transpozunu (satir ile sütun yer değiştirecek.) alın. Dizinin her iki halini yazdırın.
#include <stdlib.h>
#include <time.h>
int main() {
int A[3][2],i,j,TRANSPOZ[2][3];
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 ;j++) {
         A[i][j] = rand() % 100;
        }
    }
    printf("Oluşturulan Rastgele Değerlerle 2 Boyutlu Dizi:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; ++i)
        for(j=0; j<2; ++j)
        {
            TRANSPOZ[j][i] = A[i][j];
        }
    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j)
        {
            printf("%d  ",TRANSPOZ[i][j]);
        }
        printf(" \n"); }
    printf("\n");
    return 0;
}
