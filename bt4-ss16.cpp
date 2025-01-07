#include <stdio.h>
void printArr(int *arr){
    for(int i=0;i<10;i++){
        printf("Phan tu arr[%d]=%d\n",i,*(arr+i));
    }
}

int main()
{
    int arr[10]={0,-34,23,4,6,-2,2,5,-7,39};
    printArr(arr);
    return 0;
}
