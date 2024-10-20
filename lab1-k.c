#include <stdio.h>
#define R 5
#define C 5

void matal(int mat[R][C]){
    int a;
    for (a=0;a<R;a++){
        for (int b=0;b<C;b++){
            scanf("%d", &mat[a][b]);
        }
    }
}

void matprint(int mat[R][C]){
    for (int a=0;a<R;a++){
        for (int b=0;b<C;b++){
            printf("%d ", mat[a][b]);
        }
        printf("\n");
    }
}

void function(int mat[R][C]){
    int top=0;
    for(int i=0;i<R;i++){
        top=0;
        for(int j=0;j<C;j++){
            top+=mat[i][j];
    
        }

        for(int k=0;k<C;k++){
            mat[k][i]+=top;
        }
    }
    for(int i=0;i<R;i++){
        top=0;
        for(int j=0;j<C;j++){
            top+=mat[j][i];
        }
        for(int k=0;k<C;k++){
            mat[i][k]+=top;
        }
    }
    matprint(mat);
}

int main(){
    int mat[R][C];
    int top1=0;
    matal(mat);
    function(mat);
    






    return 0;
}