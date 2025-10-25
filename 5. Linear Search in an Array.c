#include <stdio.h>
int main() {
    int sam[100], Mehedi, tiger, item, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &Mehedi);
    printf("Enter %d elements:\n", Mehedi);
    for(tiger = 0; tiger < Mehedi; tiger++) {
        scanf("%d", &sam[tiger]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &item);
    for(tiger = 0; tiger < Mehedi; tiger++) {
        if(sam[tiger] == item) {
          printf("Element found at position %d\n", tiger + 1);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}
