#include<stdio.h>
int main(){
    int x = 0x15213F10 >> 4; // >> 시프트 연산 -> 4비트 제거
    // x = 0x15213F1
    char y = (char) x; // x를 문자형으로 형변환 -> x 중 1byte만 들어옴 char는 1byte, int는 4byte
    // y = F1 -> 뒤에서부터 순서대로 대입
    // F -> 15(16진수에서)
    // F1 = 15 1 -> 각 숫자를 2진수로 변환 => 1111 0001
    // 맨 앞은 부호비트로 음수 -> 음수는 2의 보수 형태로 저장되기 때문에 1을 빼고(1의 보수로 변형) 0과 1을 전환(2진수로 변형)
    // => 1000 1111 => -15

    unsigned char z = (unsigned char) x; // unsigned -> 절대값의 표현 => 모든 값을 데이터로 사용하기 때문에 부호비트는 사용하지 않음
    // char x = 1111 0001 부호비트를 사용하지 않기 때문에 바로 10진수로 표현
    // 241
    printf("%d, %u", y, z); // -15, 241
    return 0;
}