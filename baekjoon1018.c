#include<stdio.h>

int main1(){

  int N, M;// 8이상 50이하 N = 행 M = 열
  char chess[50][51];//[열][행]
  int k = 0;
  int kk = 0;
  int a = 0;
  int sum = 0;// 몇개 교체해야하는지

  scanf("%d %d", &M, &N);
  for(int i = 0; i < N; i++){
    scanf("%s", chess[i]);
  }

    while (1) { // 반복
    a = 0; // 초기화
    if (N - 8 < k) { // 주어진 행을 넘어서려고 할 때 초기화
      k = 0;
      kk++; // 열 하나를 내림
      if (kk > M - 8) { // 주어진 열을 넘어서려고 하면 끝
        printf("%d\n", sum);
        return 0;
      }
    }

    for (int i = 0; i < 8; i++) { // i = 열
      for (int j = 1; j < 8; j++) { // j = 행
        if (chess[kk + i][k + j] == chess[kk + i][k + j - 1]) {
          a++;
        }
        if (chess[kk + i][k + j] != chess[kk + i][k + j - 1]) {
          sum += a / 2;
          a = 0;
        }
      }
      a = 0; // 추가: for문이 종료되기 전에 a값 초기화
    }
    k++;
    printf("%d", k);
    fflush(stdout); // 출력 버퍼를 비워 줍니다.
  }


  return 0;
}
