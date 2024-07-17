#include <stdio.h>


void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int dizi[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (dizi[j] > dizi[j+1]) {
                swap(&dizi[j], &dizi[j+1]);
            }
        }
    }
}
void printArray(int dizi[], int size) {
    for (int i=0; i < size; i++)
        printf("%d ", dizi[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);
    int dizi[n];
    printf("Dizi elemanlarini girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Dizinin orijinal hali: \n");
    printArray(dizi, n);
    bubbleSort(dizi, n);

    printf("Dizinin siralanmis hali: \n");
    printArray(dizi, n);

    return 0;
}

