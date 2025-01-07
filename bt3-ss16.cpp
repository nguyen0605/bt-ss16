#include <stdio.h>
int sum(int *a,int *b){
    return *a+*b;
}
int main()
{
    int a=5, b=10;
    int result=sum(&a,&b);
    printf("Tong cua %d va %d la %d",a,b,result);
    return 0;
}

