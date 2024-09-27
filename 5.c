//Program to add 2 to distance given in feet and inches

//5.1
//Without User Defined Input
#include <stdio.h>
int main() {
    int feet = 5, inches = 10;
    inches += 2;
    if (inches >= 12) {
        feet += inches / 12;
        inches = inches % 12;
    }
    printf("New distance: %d feet %d inches\n", feet, inches);
    return 0;
}

//5.2
//With User Defined Input
#include <stdio.h>
int main() {
    int feet, inches;
    printf("Enter feet: ");
    scanf("%d", &feet);
    printf("Enter inches: ");
    scanf("%d", &inches);
    inches += 2;
    if (inches >= 12) {
        feet += inches / 12;
        inches = inches % 12;
    }
    printf("New distance: %d feet %d inches\n", feet, inches);
    return 0;
}

//5.3
//Using a function
#include <stdio.h>
int addTwoInches(int feet, int inches) {
    inches += 2;
    if (inches >= 12) {
        feet += inches / 12;
        inches = inches % 12;
    }
    printf("New distance: %d feet %d inches\n", feet, inches);
}
int main() {
    int feet, inches;
    printf("Enter feet: ");
    scanf("%d", &feet);
    printf("Enter inches: ");
    scanf("%d", &inches);
    addTwoInches(feet, inches);
    return 0;
}


