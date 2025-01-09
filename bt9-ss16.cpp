#include <stdio.h>
#include <stdlib.h>

void addValue(int *arr, int value, int index, int size) {
    for (int i = size; i > index; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + index) = value;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int *arr;
    int size = 5;
    int newValue, addIndex;

    arr = (int *)malloc(10 * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 - 50;
    }
    printf("Mang ban dau: ");
    printArray(arr, size);

    printf("\nNhap gia tri muon them: ");
    scanf("%d", &newValue);
    printf("Nhap vi tri muon them (0-%d): ", size);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > size) {
        printf("Vi tri khong hop le!\n");
        free(arr);
        return 1;
    }

    addValue(arr, newValue, addIndex, size);
    size++;

    printf("Mang sau khi them: ");
    printArray(arr, size);

    free(arr);
    return 0;
}

