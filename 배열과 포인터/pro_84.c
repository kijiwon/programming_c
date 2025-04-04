#include <stdio.h>
int main(){
    int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = num[0]; // 포인터 변수 ptr에 num[0][0]의 주소를 할당
    ptr += 5; // 포인터를 5번 이동 -> num[1][2]
    while(*ptr != 9){ // ptr이 가리키는 주소의 값이 9가 아닐때까지 반복
        printf("%d, ", *ptr); // 6, 7, 8,
        ptr++;
    }
    return 0;
}