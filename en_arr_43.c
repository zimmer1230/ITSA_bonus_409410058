#include <stdio.h>

int matr_A[20][20];
int matr_B[20][20];


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matr_A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matr_B[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matr_A[i][j]+=matr_B[i][j];
            printf("%d",matr_A[i][j]);
            if(j!=n-1)
                printf(" ");
        }
        printf("\n");
    }


}
