#include <stdio.h>
#include <math.h>

int main(){
    double num1 = -3.75;
    double num2 = 4.5;

    printf("%.2f\n", cell(num1)); // cell -> 올림 -3.00(소수점 두번째자리까지 표현)
    printf("%.2f\n", floor(num2)); // floor -> 내림 4.00
    printf("%.2f\n", round(num1)); // round -> 절대값을 씌운 값에 가장 가까운 정수로 반올림 -4.00
    printf("%.2f\n", round(num2)); // 5.00
    return 0;
}