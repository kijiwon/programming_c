#include <stdio.h>
#include <ctype.h>
int main(){
    char p[] = "It is 8";
    char result[20];
    int i;
    for(i = 0; p[i] != '\0'; i++){
        if(isupper(p[i]))
            result[i] = (p[i] - 'A' + 5) % 26 + 'A';
        else if(islower(p[i]))
            result[i] = (p[i] - 'a' + 10) % 26 + 'a';
        else if(isdigit(p[i]))
            result[i] = (p[i] - '0' + 3) % 10 + '0';
        else // 공백인 경우
            result[i] = p[i];
    }
    result[i] = '\0';
    printf("%s\n", result);
    return 0;
}

// 이 문제는 ASCII코드를 이용하거나 시저 암호 형태로 풀 수 있으나 시저 암호 형태로 푸는 것이 더 빠름!
// ASCII코드 이용 시 각 문자에 대한 코드를 직접 대입
// 시저 암호 형태는 뒤에 오는 숫자(5, 10, 3)만큼 이동
// i = 0일 때 p[i] - 'A' + 5 -> I에서 5칸 이동 -> I J K L M N -> N
// i = 1일 때 p[i] - 'a' + 10 -> t에서 10칸 이동 -> t u v w x y z a b c d -> d
// i = 6일 때 p[i] - '0' + 3 -> 8에서 3칸 이동 -> 8 9 10 1(10다음 1로 돌아옴) -> 1