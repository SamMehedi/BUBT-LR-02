#include <stdio.h>

int main() {
    int sam[100], Mehedi, tiger;

    printf("Enter number of elements: ");
    scanf("%d", &Mehedi);

    printf("Enter %d elements:\n", Mehedi);
    for(tiger = 0; tiger < Mehedi; tiger++) {
        scanf("%d", &sam[tiger]);
    }

    printf("Negative numbers are:\n");
    for(tiger = 0; tiger < Mehedi; tiger++) {
        if(sam[tiger] < 0) {
            printf("%d ", sam[tiger]);
        }
    }

    return 0;
}