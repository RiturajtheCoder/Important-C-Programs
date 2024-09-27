//Program to check if a string is palindrome or not without using <string.h>

//4.1
//If the input is not user deined
#include <stdio.h>

int main() {
    char str[] = "madam";
    int i = 0, length = 0, Palindrome = 1;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

//4.2
//If the input is user defined
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, Palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }
    if (Palindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}

//4.3
//Using a function
#include <stdio.h>
int Palindrome(char str[]) {
    int length = 0, i;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }

    return 1;
}
int main() {
    char str[100];   
    printf("Enter a string: ");
    scanf("%s", str);
    if (Palindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}

