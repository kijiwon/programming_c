#include <stdio.h>
int main(int argc, char *argv[]){
    char num[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
    int i, sum = 0;
    printf("%d, ", *(*num + 1)); // *num은 배열의 첫 번째 행의 첫 번째 요소의 주소 -> *num + 1은 다음 요소를 의미 num[0][1] => 22
    printf("%d, ", **(num + 1)); // 2차원 배열에서 num + 1은 num의 다음 행의 시작 주소를 의미(num은 배열의 첫 행의 주소) -> **(num+1) => 44
    printf("%d", *(num[1] + 1)); // num[1]의 1인덱스 요소를 의미 => 55
    // 22, 44, 55
    return 0;
}