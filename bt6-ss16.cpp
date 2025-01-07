#include <stdio.h>
int findValue(int *arr,int value){
    for(int i=0;i<10;i++){
        if(*(arr+i)==value){
           return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10]={-4,0,-34,6,21,4,6,-11,9,-5};
    int value;
    printf("Nhap vao gia tri muon tim kiem: ");
    scanf("%d",&value);
    int index=findValue(arr,value);
    if(index==-1){
        printf("Gia tri %d khong ton tai trong mang",value);
    }else{
        printf("Gia tri %d ton tai o vi tri arr[%d]",value,index);
    }
    return 0;
}
