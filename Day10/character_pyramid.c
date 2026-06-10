#include<stdio.h>
int main(){
    int i, j, rows = 5;

    for(i = 0; i < rows; i++){

        for(j = 0; j <= i; j++){
            printf("%c",'A' + j);
        }
        for(j = i - 1; j >= 0; j--){
            printf("%c",'A' + j);
        }
        printf("\n");
    }
    return 0;
}