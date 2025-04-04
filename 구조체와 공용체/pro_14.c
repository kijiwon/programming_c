#include <stdio.h>
union Data
{
    int a;
    int b;
};

int main(){
    union Data data;
    data.a = 10; // 공용체 Data의 a멤버에 10 저장 -> 공용체는 같은 메모리를 참조 => data.b = 10
    printf("a: %d, b: %d\n", data.a, data.b); // a: 10, b: 10
    
    data.b = 20; // data.b에 20을 저장 -> 공용체는 같은 메모리 참조 => data.a = 20
    printf("a: %d, b: %d\n", data.a, data.b); // a: 20, b: 20
    return 0;
}