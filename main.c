#include <stdio.h> /* tum bellegin kapladigi alani bir elamaninkine bolersek eleman
sayisini bulabiliriz*/

int main() {
  const int numbers[]={1,2,3,4,5,6,7,8,9};
    printf("%d",sizeof(numbers)/sizeof(numbers[0]));
    return 0;
}
/* const yazarsan bunlar sabit olur degistirilemez*/