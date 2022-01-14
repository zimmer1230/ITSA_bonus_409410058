#include<stdio.h>
#include<string.h>

char str[2000];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s",str);
        int l=(unsigned)strlen(str);
        for(int i=0;i<l;i++){
            printf("%c",str[l-1-i]);
        }
        printf("\n");
    }
    return 0;
}
