#include <stdio.h>
#include <stdlib.h>
#include <math.h> //girilen sayının arekökünün tam sayı olup olmadığıonı bulan program

int main() {
int sayi,sonuc;
printf("pozitif bir sayi gir");
scanf("%d",&sayi);
if(sayi<0){
    printf("pozitif sayi girmedin");
}
else{
    sonuc=sqrt(sayi);
    if(sonuc*sonuc==sayi){
        printf("karekoku %d bir tam sayi ",sonuc);
    }
    else{
        printf("karekoku %d bir tam sayi degil",sonuc);
    }
}

    return 0;
}
