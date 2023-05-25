#include <stdio.h>

int getSumOfDigits(int number){//각자리수 합
    int sum = 0;
    while (number > 0){
        sum += number % 10;//1의 자리 더하기
        number /= 10;// 1의 자리수는 날리고 자리수 앞당기기
    }
    return sum;
}

int main(){
    int N;
    scanf("%d", &N);

    int i;
    for (i = 0; i <= N; i++){
        if (N == i + getSumOfDigits(i)){
            printf("%d", i);
            return 0;
        }
    }

    printf("0");
    return 0;
}
