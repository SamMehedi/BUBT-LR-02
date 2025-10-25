#include <stdio.h>

int main() {
    int sam[100], Mehedi, tiger;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &Mehedi);

    printf("Enter %d elements:\n", Mehedi);
    for(tiger = 0; tiger < Mehedi; tiger++) {
        scanf("%d", &sam[tiger]);
    }

    max = sam[0];
    min = sam[0];

    for(tiger = 1; tiger < Mehedi; tiger++) {
        if(sam[tiger] > max) {
            max = sam[tiger];
        }
        if(sam[tiger] < min) {
            min = sam[tiger];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}