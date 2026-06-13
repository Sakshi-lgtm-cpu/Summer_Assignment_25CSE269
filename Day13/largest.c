#include<stdio.h>

int main(){
    int arr[100], n, i, largest, smallest;

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    largest = smallest = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > largest)
        largest = arr[i];
    }

    printf("largest element = %d\n",largest);
    printf("smallest element = %d\n",smallest);
    return 0;
}