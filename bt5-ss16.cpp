#include <stdio.h>
void updateValue(int *arr,int idx, int value){
    *(arr+idx)=value;
}
void printArr(int *arr){
    for(int i=0;i<10;i++){
        printf("arr[%d]=%d\n",i,*(arr+i));
    }
}
int main()
{
    int arr[10]={-4,0,-34,6,21,4,6,-11,9,-5};
    int editIdx, newValue;
    printf("Mang hien tai:\n");
    printArr(arr);
    printf("Nhap vao vi tri muon cap nhat:(0-9) ");
    scanf("%d",&editIdx);
    if(editIdx<0 || editIdx>9){
        printf("Vi tri khong hop le!");
        return 1;
    }
    printf("Nhap vao gia tri moi: ");
    scanf("%d",&newValue);
    updateValue(arr,editIdx,newValue);
    printf("Mang moi:\n");
    printArr(arr);
    return 0;
}
