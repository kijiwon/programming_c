#include<stdio.h>
int main(){
    int x = 0x11; // 0x -> 16진수 16진수 11을 2진수로 표현하면 10001. 10 진수로 표현하면 17
    int y, z;
    y = x & 0x0f; // 16진수 f를 2진수로 표현하면 1111
    // 0001 0001과 0000 1111을 비트AND연산
    // 0000 0001 -> 1
    z = x | 0x0f;
    // 0001 0001과 0000 1111을 비트OR연산
    // 0001 1111 -> 31
    printf("x=%d, y=%d, z=%d", x, y, z); // x=17, y=1, z=31
}