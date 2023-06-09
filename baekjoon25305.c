#include<stdio.h>

int main(void){

  int N, K; // 응시한 학생수, 상받는 학생 수
  int x[10001] = {0,}; // 학생들의 점수

  scanf("%d %d", &N, &K);

  for(int i = 0; i < N; i++){//학생들 점수 입력
    scanf("%d", &x[i]);
  }

  for(int i = 0; i < N - 1; i++){//버블 정렬
    for(int j = 0; j < N - i - 1; j++){
      if(x[j] < x[j+1]){
        int a = 0;
        a = x[j];
        x[j] = x[j+1];
        x[j+1] = a;
      }
    }
  }
  printf("%d", x[K-1]);


  return 0;
}