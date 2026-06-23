#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] == 1) {
            printf("First repeating character is: %c", str[i]);
            return 0;
        }
        freq[str[i]]++;
    }

    printf("No repeating character found.");

    return 0;
}