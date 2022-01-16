#include <stdio.h>

int main(){
    int arr[20];
    int min,max;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(i==0){
            min=arr[i];
            max=arr[i];
        }
        min=(min>arr[i])?arr[i]:min;
        max=(max<arr[i])?arr[i]:max;
    }
    printf("Largest number = %d\n",max);
    printf("Smallest number = %d\n",min);



return 0;
}
