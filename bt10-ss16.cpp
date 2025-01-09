#include <stdio.h>
#include <stdlib.h>

int deleteElement(int *arr, int index, int *size){
	for(int i=index;i<*size;i++){
		*(arr+i)=*(arr+i+1);
	}
	(*size)--;
	
	return *size;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int *arr;
    int size = 5;
    int deleteIndex;

    arr = (int *)malloc(10 * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 - 50;
    }
    printf("Mang ban dau: ");
    printArray(arr, size);
    
    printf("\nNhap vi tri muon xoa(0-%d): ",size-1);
    scanf("%d",&deleteIndex);
    
    deleteElement(arr,deleteIndex,&size);
    
    printf("Mang sau khi xoa: ");
    printArray(arr, size);
    
    free(arr);
    
    return 0;
}

