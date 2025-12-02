#include <stdio.h>

void legs(int arr[], int n);

int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i = 0 ; i < t ; i++){
        scanf("%d",&(arr[i]));
    }
    legs(arr,t);
    return 0;
}

void legs(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i]%2 != 0){
            printf("0\n");
        }
        else{
            printf("%d\n",arr[i]/4 + 1);
        }
    }
}