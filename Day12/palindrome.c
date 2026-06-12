#include<stdio.h>
#include<math.h>

int palindrome(char str[]){
    int i, len = strlen(str);
    for(i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1])
        return 0;
    }
    return 1;
}
int main(){
    char str[100];

    printf("enter a string:");
    scanf("%s",str);

    if(palindrome(str))
    printf("palindrome\n");
else
    printf("not a palindrome\n");
    return 0;
     
}