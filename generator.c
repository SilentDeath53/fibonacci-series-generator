#include <stdio.h>

void printFibonacciSeries(int n) {
    int prev = 0, curr = 1, next;

    printf("Fibonacci Series up to %d:\n", n);
    printf("%d ", prev);

    while (curr <= n) {
        printf("%d ", curr);
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printFibonacciSeries(num);

    return 0;
}
