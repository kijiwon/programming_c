#include <stdio.h>
int main(){
    int x[] = {1, 2, 3, 4};
    int sum = fnc_sum(x, sizeof(x) / sizeof(int)); // x의 크기 = int 요소가 4개 = 4byte * 4 = 16, int의 크기 = 4byte
    printf("%d", sum);
}

int fnc_sum(int arr[], int size){ // arr = x, size = 4
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i]; // x의 요소의 합
    }
    return sum;
}