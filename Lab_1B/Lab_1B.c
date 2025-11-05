//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

#include <stdio.h>
int main() {
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
    int n, i, key, low, high, mid, found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[100];
    
    printf("Enter %d elements of sorted array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n-1;
    while (low <= high) {
        mid = (low + high) / 2;
        printf("\nRemaining array:\n");
        for (i = low; i <= high; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n Start = %d, End = %d, Mid = %d\n", low, high, mid);
        printf("Element at mid = %d position\n", arr[mid]);
        printf("\n");
        
        if (arr[mid] == key) {
            printf("The element %d is located at position %d\n", key, mid + 1);
            found = 1;
            break;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    if (!found) {
        printf("The element %d is not present in the array\n", key);
    }
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
    return 0;
}