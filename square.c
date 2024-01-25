#include <stdio.h>

int main() {
    int sideLength = 5; // You can adjust the side length as needed

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
