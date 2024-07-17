#include <stdio.h> //matris carpimi 1.nin satir sayisi ile 2.nin sutun sayisi ayni olmali

int main() {
int x[50][50],y[50][50],result[50][50];
int i,j,k,sum=0,xrows,xcolumns,yrows,ycolumns;
    printf("x matrisinin satir ve sutununu gir");
    scanf("%d %d",&xrows,&xcolumns);
    for(i=0;i<xrows;i++){
        for(j=0;j<xcolumns;j++){
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("y matrisinin satir ve sutununu gir");
    scanf("%d %d",&yrows,&ycolumns);
    if(yrows!=xcolumns){
        printf("bu matrisler carpilamaz");
    }else{
    for(i=0;i<yrows;i++){
        for(j=0;j<ycolumns;j++){
            printf("y[%d}[%d]=",i,j);
            scanf("%d",&y[i][j]);
        }
    }}
    printf("\n");
    for(i=0;i<xrows;i++){
        for(j=0;j<ycolumns;j++){
            for(k=0;k<yrows;k++){
                sum+=x[i][k]*y[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("sonnuc\n");
    for(i=0;i<xrows;i++){
        for(j=0;j<ycolumns;j++){
            printf("%5d",result[i][j]);
        }
        printf("\n \n");
    } printf("\n");
    return 0;
}
