#include <stdio.h>
int g = 5; // 전역변수 -> 수정 시 업데이트됨
void func1(int n){
    static int s = 2; // 정적변수 -> 값을 기억
    s += n;
    g += n; // 전역변수 g 업데이트
    printf("%d, %d\n", s, g);
}

void func2(){
    int g = 10; // 지역변수 -> 함수가 종료되면 사라짐
    g += 5;
    printf("%d\n", g);
}

int main(){
    func1(3); // 5, 8(g 업데이트)
    func2(); // 15
    func1(4); // 9, 12(g 업데이트) 
    func2(); // 15
    printf("%d\n", g); // 12(전역변수 g)
    return 0;
}