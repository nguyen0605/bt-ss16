#include <stdio.h>
int tong(int a,int b,int *sum){
    return *sum=a+b;
}
int main()
{
    int a=5, b=10, sum=0;
    tong(a,b,&sum);
    printf("Tong cua %d va %d la %d",a,b,sum);
    return 0;
}

