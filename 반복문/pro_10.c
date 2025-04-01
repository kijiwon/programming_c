#include<stdio.h>
int main(){
    int i, sum = 0;
    for(i=1; i<=10; i+=2){
        if(i % 2 && i % 3) continue; // 0만 false 나머지는 모두 true(음수도)
        sum += i; // if문의 범위가 아님!
        // i = 1      i = 3       i = 5       i = 7      i = 9
        // continue   sum = 3     continue    continue   sum = 12
        printf("%d", sum); // 12
        return 0;
    }
}