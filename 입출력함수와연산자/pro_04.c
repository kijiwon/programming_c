#include<stdio.h>
int main(){
    printf("|%d|\n", 123); // |123|
    printf("|%5d|\n", 123); // %5d -> 5개의 공간을 만들어 우측 정렬 => |  123|
    printf("|%-5d|\n", 123); // %-5d -> 5개의 공간을 만들어 좌측 정렬 => |123  |
    printf("|%05d|\n", 123); // %05d -> 5개의 공간을 만들어 우측 정렬, 빈 공간은 0으로 채우기 => |00123|
    printf("|%6.1f|\n", 123.17); // %6.1f -> 소수점 포함 6개의 공간을 만들어 소수점 한 자리만 표현 => | 123.2|
    printf("|%07.2f|\n", 123.45); // %07.2f -> 소수점 포함 7개의 공간을 만들어 소수점 두 자리까지 표현, 빈 공간은 0으로 채우기 => |0123.45|
    printf("|%3.1f|\n", 123.45); // %3.1f -> 소수점 포함 3개의 공간을 만들어 소수점 한 자리만 표현. 정수 부분은 공간과 상관 없이 모두 출력됨 => |123.5|
}