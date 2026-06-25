#include <stdio.h>
#include <string.h>

int main() {
    char name[5][50], temp[50];
    int i, j;

    // Input names
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", name[i]);
    }

    // Sorting names alphabetically
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}