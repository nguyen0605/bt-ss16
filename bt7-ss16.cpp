#include <stdio.h>
void arrangeArray(int *arr){
    for(int i=0;i<9;i++){
        for(int j=0;j<10-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}
void printArray(int *arr){
    for(int i=0;i<10;i++){
        printf("arr[%d]=%d\n",i,*(arr+i));
    }
}
int main()
{
    int arr[10]={-4,0,-34,6,21,4,6,-11,9,-5};
    printf("Mang ban dau:\n ");
    printArray(arr);
    arrangeArray(arr);
    printf("Mang sau khi sap xep tang dan:\n ");
    printArray(arr);
    return 0;
}
