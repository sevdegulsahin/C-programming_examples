#include <stdio.h> //dizi degerlerini kücükten buyuge siralama
void sortit();
void writethearray();
void writethearrayreserve();
int numbers[7];
int i;
int main() {
    printf("enter array numbers");
    for(i=0;i<7;i++){
        scanf("%d",&numbers[i]);
    }
    printf("\n before sorting\n");
    writethearray();
    printf("\n the array is sorting...\n");
    sortit();
    printf("\nafter sorting\n");
    writethearrayreserve();

    return 0;
}
void sortit(){
    int j,reserve;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(numbers[j]<numbers[i]){
                reserve=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=reserve;}
        }
    }
}
void writethearray(){
    for(i=0;i<7;i++){
        printf("\n%d",numbers[i]);
    }
    printf("\n");
}
void writethearrayreserve(){
    for(i=6;i>=0;i--){
        printf("\n%d",numbers[i]);
    }
    printf("\n");
}
