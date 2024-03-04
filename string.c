#include <stdio.h>
#include <string.h>

int removeDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2) return; // If the string is empty or has only one character, no duplicates to remove

    int tail = 1;

    for (int i = 1; i < len; ++i) {
        int j;
        for (j = 0; j < tail; ++j) {
            if (str[i] == str[j]) break; // If a duplicate is found, break
        }
        if (j == tail) {
            str[tail++] = str[i]; // If no duplicate is found, append the character to the end of the string
        }
    }
    str[tail] = '\0'; // Null-terminate the string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}