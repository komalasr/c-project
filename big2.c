#include <stdio.h>

void biggest2() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare the numbers
    if (a > b) {
        printf("The bigger number is: %d\n", a);
    } else if (b > a) {
        printf("The bigger number is: %d\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

 //   return 0;
}
