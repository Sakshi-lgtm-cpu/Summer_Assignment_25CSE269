#include<stdio.h>

long long factorial(int n){
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    printf("factorial of %d = %lld\n",num,factorial(num));
    return 0;
}