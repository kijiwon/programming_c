#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "HELLO";
    char str2[] = "HELLO";
    char *p1 = str1; // str1의 주소 할당
    char *p2 = str2; // str2의 주소 할당
    
    if(p1 == p2){ // p1과 p2가 동일한 메모리 주소를 가리키는지? -> false
        printf("True \n");
    } else{
        printf("False \n"); // False
    }
    
    if(strcmp(p1, p2) == 0){ // p1과 p2가 가리키는 문자열이 동일한지? -> 일치하면 0을 반환
        printf("True \n"); // True
    } else{
        printf("False \n");
    }
    return 0;
}