#include <stdio.h>
#include <time.h>
#include <stdlib.h>


    int main(){
        int i,zar,dizi[7]={0,0,0,0,0,0,0};
        srand(time(NULL));
        for(i=1;i<=100;i++){
            zar=rand()%6+1; //1le 6 arasında rastgele sayı
            dizi[zar]++;
        }
        printf("zar numarasi\n kac defa geldi\n");
        for(i=1;i<7;i++){
            printf("%d\t\t %d\n",i,dizi[i]);
        }
        return 0;
    }


