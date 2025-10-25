#include <stdio.h>

int main() {
    int sam[100], Mehedi, tiger, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &Mehedi);

    printf("Enter %d elements:\n", Mehedi);
    for(tiger = 0; tiger < Mehedi; tiger++) {
        scanf("%d", &sam[tiger]);
    }

    for(tiger = 0; tiger < Mehedi; tiger++) {
        sum = sum + sam[tiger];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
