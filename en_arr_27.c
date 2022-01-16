#include<stdio.h>
int table[70002];

int main(){
    int n;
    scanf("%d",&n);
    int index;
    for(int i=0;i<n;i++){
        scanf("%d",&index);
        table[index]=1;
        if( (char)getchar()==10) break;
    }
    int virg=0;
    for(int i=1;i<n+1;i++){

        if(table[i]==0 && virg==0){
            printf("%d",i);
            virg=1;
        }
        else if(table[i]==0){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;

}
