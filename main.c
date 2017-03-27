#include <stdio.h>

int main() {
    int max = 100;
    int sumOfSquares = 0;
    int sum = 0;
    for (int i = 1; i <= max; i++) {
        sum += i;
        sumOfSquares += i*i;
    }
    int squareOfSum = sum*sum;
    printf("%i", sumOfSquares-squareOfSum);
    return 0;
}