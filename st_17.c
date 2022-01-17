#include <stdio.h>
#include <string.h>
int is_recursive(char* str){
    int L=strlen(str);
    for(int i=0;i<L;i++){
        if( str[i]!=str[L-1-i] )
            return 0;
    }
    return 1;
}
int main(){
    while(1){
        char str[1000];
        scanf("%s",str);
        if(is_recursive(str))
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}
