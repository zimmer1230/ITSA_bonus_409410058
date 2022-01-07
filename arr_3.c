#include <stdio.h>

int main(){
    int arr[6];
    int ans=0;
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
        ans+=arr[i]*arr[i]*arr[i];
    }
    printf("%d\n",ans);
    return 0;



}
