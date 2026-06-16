#include<stdio.h>

int main(){
    int n, i, j, count, maxcount = 0, maxElement;

    printf("enter size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        count = 1;

        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            maxElement = arr[i];
        }
    }
    printf("element with maximum frequency = %d\n",maxElement);
    printf("frequency = %d\n", maxcount);
    return 0;
}