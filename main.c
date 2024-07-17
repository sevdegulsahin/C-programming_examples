#include <stdio.h>  //Rastgele değerlerden oluşan 2 boyutlu dinamik bir dizi oluşturun.
// Diziyi ekrana yazdırın.
#include <stdlib.h>
#include <time.h>

int main() {
    int satir,sutun;
    printf("satir sayisini gir");
    scanf("%d",&satir);
    printf("sutun sayisini girin");
    scanf("%d",&sutun);
    int **randomMatrix = (int **)malloc(satir * sizeof(int *));
    for (int i = 0; i < satir; i++) {
        randomMatrix[i] = (int *)malloc(sutun* sizeof(int));}
    srand(time(NULL));
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            randomMatrix[i][j] = rand() % 100;
        }
    }
    printf("Oluşturulan Rastgele Değerlerle 2 Boyutlu Dizi:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%4d ", randomMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
