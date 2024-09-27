//Program to access array elements using pointers

//9.1
//Without User Defined Input
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
    return 0;
}

//9.2
//With User-Defined Input
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
    return 0;
}

//9.3
//Using a Function
#include <stdio.h>
void printArray(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printArray(ptr, n);
    return 0;
}

