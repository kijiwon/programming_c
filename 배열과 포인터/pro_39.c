#include <stdio.h>
int main(){
    int a = 10, b = 20;
    int *p; // 포인터 변수 p
    p = &a; // a의 주소를 할당
    *p = 30; // 포인터 변수 p가 담고 있는 주소의 값에 30 할당 -> a = 30
    p = &b; // b의 주소를 할당 
    *p = 40; // 포인터 변수 p가 담고 있는 주소의 값에 40 할당 -> b = 40
    printf("a = %d, b = %d\n", a, b); // a = 30, b = 40
    return 0;
}