#include <stdio.h> //disardan arraye girilecek eleman sayisi girilsin ve bu sonra array sayilarini girsin
// bunun sonucunda tek sayilarla cift sayilari ekrana yazdirsin

int main() {
    int i,unit;
    int numbers[100];
    printf("enter a positive number");
    scanf("%d",&unit);
    printf("\n enter array numbers");
    for(i=0;i<unit;i++){
        scanf("%d",&numbers[i]);
    }
    printf("odd numbers");
    for(i=0;i<unit;i++){
      if(numbers[i]%2==1)
          printf("\n%d",numbers[i]);
    }
    printf("\neven numbers");
    for(i=0;i<unit;i++){
        if(numbers[i]%2==0)
            printf("\n%d",numbers[i]); }
    printf("\n");

    return 0;
}
