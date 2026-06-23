#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] > max) {
            max = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is: %c", maxChar);
    printf("\nIt appears %d times", max);

    return 0;
}