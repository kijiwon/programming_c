// 삽입 정렬
#include <stdio.h>
int main(){
    int arr[] = {34, 8, 50, 11, 18};
    int i, j, key;
    for(i = 1; i < 5; i++){
        key = arr[i]; // arr[1]
        j = i - 1; // i 앞의 요소 j = 0
        while(j >= 0 && arr[j] > key){
            // arr[j]가 arr[i] 보다 클 때 -> 자리 바꾸기
            // arr[0] = 34, key = 8
            arr[j+1] = arr[j]; // arr[i]요소를 arr[j]로 교체 arr[1] = arr[0] = 34 
            j = j - 1; // j = -1 -> 반복문 종료
        }
        arr[j+1] = key; // arr[0] = 8 -> 가장 작은 값이 맨 앞으로 이동  
    }
    for(i = 0; i < 5; i++){
        printf("%d, ", arr[i]);
    }
}