//Program to print and count number of vowels in a string

//7.1
//Without User Defined Input
#include <stdio.h>
int main() {
    char str[] = "hello world";
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            count++;
        }
    }
    printf("\nNumber of vowels: %d\n", count);
    return 0;
}

//7.2
//With user defined input
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Input string with spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            count++;
        }
    }
    printf("\nNumber of vowels: %d\n", count);
    return 0;
}

//7.3
//Using a function
#include <stdio.h>
int countVowels(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            count++;
        }
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Input string with spaces

    int vowelCount = countVowels(str);
    printf("\nNumber of vowels: %d\n", vowelCount);
    return 0;
}

