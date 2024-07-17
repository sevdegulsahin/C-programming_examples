#include <stdio.h>

void tekrarfonk(int dizi[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (dizi[i] == dizi[j]) {
                printf("Tekrar eden eleman: %d\n", dizi[i]);
            }
        }
    }
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 2, 6, 7, 8, 9, 1, 10, 11, 5};
    int size = sizeof(dizi) / sizeof(dizi[0]);

    printf("Dizi Elemanlari: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("Tekrar Eden Elemanlar:\n");
  tekrarfonk(dizi, size);

    return 0;
}
