#include <stdio.h> /*bir sinif en fazla 100 ogrenciden olusabilir.sinifta bulunan
 ogrenci sayisini girdi olarak alip her ogrencinin okul nosu ile notunu iki ayriarraye
 okutalim. sonuc olarak en dusuk ve en yuksek notu alan ogrenciler ekrana yazilsin*/


int main() {
    int size,i,big=0,small=100,bigindex,smallindex;
    int notes[100],studentno[100];
    printf("enter class size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("student no and note");
        scanf("%d %d",&studentno[i],&notes[i]);
    }
    for(i=0;i<size;i++){
        if(notes[i]>big){
            big=notes[i];
            bigindex=i;
        }
        if(notes[i]<small){
            small=notes[i];
            smallindex=i;
        }
    }
    printf("\n %d numarali ogrenci en yuksek notu %d almistir",studentno[bigindex],big);
    printf("\n %d numarali ogrenci en dusuk notu %d almistir",studentno[smallindex],small);
    return 0;
}
