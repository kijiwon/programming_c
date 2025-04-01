#include <stdio.h>
void reverseNum(int num){
    if(num < 10){
        printf("%d", num);
    } else {
        reverseNum(num/10);
        // num = 1234       num = 123       num = 12          num =1
        // reverseNum(123)  reverseNum(12)  reverseNum(1)     1
        printf("%d", num % 10); // 재귀함수 종료 후 출력
        // stack에 이전 값(num)을 저장한 후 하나씩 꺼내 출력
        // num = 12     num = 123   num = 1234
        // 2            3           4
    }
}

int main(){
    reverseNum(1234); // 1234
    return 0;
}