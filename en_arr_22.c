#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int L=strlen(str);
    for(int i=0;i<L;i++){
        str[i]=(char) ((int)str[i]-3);
    }
    printf("%s\n",str);
    return 0;


}
