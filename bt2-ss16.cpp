#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=5, b=10;
    printf("Gia tri truoc khi thay doi: a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("Gia tri sau kh thay doi: a=%d , b=%d",a,b);
    return 0;
}
