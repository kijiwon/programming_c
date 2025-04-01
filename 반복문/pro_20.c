#include<stdio.h>
int main(){
    int a, b;
    a = 2;
    while (a-- > 0) // a 참조 후 감소
        // a = 2    a = 1   a = 0(false)
    {   
        // a = 1    a = 0   a = -1(출력x)
        printf("a = %d \n", a);
    }
    for(b = 0; b < 2; b++){
        // b = 0    b = 1   b = 2(false)
        // a = -1   a = 0
        printf("a = %d \n", a++); // 참조 후 증가
        // a = 0    a = 1
    }
    return 0;
}