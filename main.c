#include <stdio.h> //harf siralamasi degistirme
void characterscroll(char*,int);
int main() {
char characters[7]={'y','a','z','i','l','i','m'};
int size=sizeof(characters)/sizeof(characters[0]);
characterscroll(characters,size);
    return 0;
}
void characterscroll(char* characters,int size){
    int i=0,j=0;
    for (int i = 0; i < size+1; ++i) {
        for (int j = i; j < size; ++j) {
            printf("%c",*(characters+j));}
        for (int j = 0; j < i; ++j) {
            printf("%c",*(characters+j));

        }
        printf("\n");
    }

}