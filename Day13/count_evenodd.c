#include<stdio.h>

int main(){
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("number of even elements = %d\n",even);
    printf("number of odd elements = %d\n",odd);
    return 0;
}