#include <stdio.h>


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int all=m*n;
    int inp;
    int girl=0,boy=0;
    for(int i=0;i<all;i++){
        scanf("%d",&inp);
        if(inp==0){
            girl++;
        }
        else{
            boy++;
        }
    }
    if(girl>boy)
    printf("0\n");
    else if(boy>girl)
        printf("1\n");
    else
        printf("2\n");
    return 0;

}
