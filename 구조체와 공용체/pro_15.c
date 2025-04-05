// 리틀 엔디안(Little Endian)방식: 낮은 값을 낮은 메모리 주소에 입력 => 인덱스 번호를 거꾸로 쓰는게 보기 편함!
#include <stdio.h>
int main(){
    char i;
    union {
        int int_arr[2]; // 4*2 = 8byte
        char char_arr[8]; // 1*8 = 8byte
    } endian;
    for(i = 0; i < 8; i++)
        endian.char_arr[i] = i + 16; // char_arr = {16, 17, 18, 19, 20, 21, 22, 23}
            // arr[1] 7  23
            //        6  22
            //        5  21
            //        4  20
            // arr[0] 3  19
            //        2  18
            //        1  17
            //        0  16 
            printf("%x", endian.int_arr[1]); 
            // arr[1] = {23, 22, 21, 20}
            // %x -> 16진수로 변환
            // 23 => 0001 0111 -> 17
            // 22 => 0001 0110 -> 16
            // 21 => 0001 0101 -> 15
            // 20 => 0001 0100 -> 14
            // 17161514
    return 0;
    
}