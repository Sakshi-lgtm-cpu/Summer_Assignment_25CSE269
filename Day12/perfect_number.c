#include<stdio.h>

int perfect(int n){
    int i, sum = 0;

    for(i = 1; i < n; i++){
        if(n % i == 0)
        sum = sum + i;
    }
    if(sum == n)
       return 1;
    else
       return 0;
}
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    if(perfect(num))
       printf("perfect number\n");
    else
       printf("not a perfect number\n");
    return 0;
}