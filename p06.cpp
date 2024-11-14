#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int s[SIZE];
    int i, j;
    int sum = 0;
    double average;

    for (j = 0; j < SIZE; j++) {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    for (i = 0; i < SIZE; i++) {
        printf("%7d%13d\n", i, s[i]);
        sum += s[i]; 
    }


    system("pause");
    return 0;
}
