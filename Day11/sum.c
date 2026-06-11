#include<stdio.h>

int sum(int a, int b){
    return a + b;
}
int main(){
    int num1, num2;

    printf("enter two number:");
    scanf("%d %d",&num1,&num2);

    printf("sum = %d\n",sum(num1,num2));
    return 0;
}