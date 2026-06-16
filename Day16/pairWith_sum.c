#include<stdio.h>

int main(){
    int n, i, j, sum;

    printf("enter size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter required sum:");
    scanf("%d",&sum);

    printf("pairs are:\n");
    
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
return 0;
}