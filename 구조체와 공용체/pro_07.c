#include <stdio.h>
int main(){
    struct list{
        int *fp;
    } data, *p;

    int x[] = {100, 200, 300, 400};
    p = &data; // 구조체 변수 data의 주소를 할당
    p -> fp = x + 1; // x의 1번 인덱스 요소 x[1]
    printf("%d", *(++p -> fp)); // ++(p->fp) x[1]에서 1 이동 => x[2] => 300
    return 0;
}