#include <stdio.h>

int findMax(int *arr, int size) {
    int *ptr = arr;          
    int max = *ptr;        
    for (int i = 1; i < size; i++) {
        ptr++;             
        if (*ptr > max) {
            max = *ptr;    
        }
    }
    return max;            
}

void reverseArray(int *arr, int size) {
    int *start = arr;  
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("\nThe reversed array is: ");
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf(" %d", *ptr);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ",i);
        scanf("%d", arr+i); 
    }
    reverseArray(arr, size);
    int maxElement = findMax(arr, size);
    printf("\nThe maximum element is: %d", maxElement);
    return 0;
}