#pragma once

#include <stdio.h>

int main() {
    int num1, num2, count = 0, i;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // swap the values if num1 is greater than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Even numbers between %d and %d are: ", num1, num2);

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal even numbers = %d", count);

    return 0;
}


