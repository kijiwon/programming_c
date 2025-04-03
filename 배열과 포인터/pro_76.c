#include <stdio.h>
int main(){
    int arr[] = {8, 5, 3, 1, 2, 7, 9};
    int *p = arr + 2, a = 0, b = 0;
    // 포인터 변수 p에는 arr[2]의 주소를 할당
    a = *++p; // ++p -> 증가 후 리턴, p++ -> 리턴 후 증가
    // *++p -> 현재 주소(arr[2])에서 한 칸 이동(arr[3]) -> *p 수정됨

    b = (*p)++; // 포인터 변수p의 값을 b에 할당 후 증가
    // b = arr[3]의 주소, *p = arr[4]
    printf("%d, %d\n", a, b); // 1, 1
    return 0;
}