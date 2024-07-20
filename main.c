#include <stdio.h>
#include <stdlib.h>
/*Bir dinamik fibonacci dizisi oluşturun. Dizinin eleman sayısını kullanıcıdan alın.
Dizinin son elemanını pointer yardımıyla gösteriniz.*/
int main() {
int elemansayisi,sayi1=0,sayi2=1,sayi;
    printf("eleman sayisini gir");
    scanf("%d",&elemansayisi);
    int *fibonacci= malloc(sizeof(int)*elemansayisi);
    for (int i = 0; i < elemansayisi; ++i) {
        fibonacci[i]=sayi1;
        printf("%d\n",sayi1);
        sayi=sayi1+sayi2;
        sayi1=sayi2;
        sayi2=sayi;
    }
    int *son=&fibonacci[elemansayisi-1];
    printf("dizinin son elemani %d",*son);

    return 0;
}
