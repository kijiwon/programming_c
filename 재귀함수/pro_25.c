#include <stdio.h>
int fun(int n){
    if(n < 3) return 1;
    int result = fun(n-3) + fun(n-2);
    // 📍 재귀함수가 두 개 있는 경우 좌측에 있는 재귀를 모두 끝내야 우측의 재귀를 처리할 수 있음
    // n = 8
    // result = fun(5) + fun(6)
    // fun(5)를 먼저 수행                                          fun(5)종료 후 fun(6)수행
    // n = 5                                                       n = 6
    // result = fun(2) + fun(3)                                    result = fun(3) + fun(4)
    // fun(2)수행                                                   fun(3) = 2 -> 재귀함수 종료 후 아래 코드 수행 -> 3
    // n = 2 -> 1을 리턴                                             fun(4)수행
    // fun(3)수행                                                   n = 4
    // result = fun(0) + fun(1) 각각 1을 리턴 => 2                    result = fun(1) + fun(2) -> 2
    // 재귀함수 종료 후 아래 코드 수행 -> 3                               재귀함수 종료 후 아래 코드 수행 -> 4
    // fun(2)+ fun(3) = 3                                         fun(3)+fun(4) = 4
    // 재귀함수 종료 후 아래 코드 수행 -> 5                               재귀함수 종료 후 아래 코드 수행 -> 6
    // fun(5) + fun(6) = 7
    // 재귀함수 종료 후 아래 코드 수행 -> 8
    printf("%d ", n);
    return result;  // 7
}

int main(){
    int k;
    k = fun(8); // 7
    printf("%d\n", k); // 7
    return 0;
}

// 수행 결과
// 3 5 3 4 6 8 7