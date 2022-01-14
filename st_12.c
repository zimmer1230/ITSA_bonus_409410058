#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=b-a;
    for(int i=0;i<abs(c)+1;i++){
        for(int j=0;j<a+((c>0)?i:-i);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


