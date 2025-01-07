#include <stdio.h>
int main(){
    int a=10;
    int *pointa=&a;
    printf("Gia tri cua a la %d\n",a);
    printf("Gia tri cua a la %d\n",*pointa);
    printf("Dia chi cua a la %p\n",&a);
    printf("Dia chi cua a la %p\n",pointa);
    return 0;
}
