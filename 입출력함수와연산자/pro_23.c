#include<stdio.h>
int main(){
    int a = 5, b = 5;
    a *= 3 + b++; // 단항 연산자 순위가 제일 높음 -> 3 + (b++)로 계산. 이때 b는 6이 됨
    printf("%d, %d", a, b); // 13, 6
    return 0;
}