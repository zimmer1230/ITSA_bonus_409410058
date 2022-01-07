#include <stdio.h>

struct s_p500{
    int s;
    int p;
}table[30];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&table[i].s,&table[i].p);
    }
    int car=1;
    int save=0;
    for(int i=1;i<n;i++){
        save=0;
        for(int j=0;j<i;j++){
            if(table[j].p<=table[i].s){
                save=1;
                table[j].p=25;
                break;
            }
        }
        if(save==0)
            car++;
    }
    printf("%d\n",car);
    return 0;


}
