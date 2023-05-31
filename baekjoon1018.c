#include<stdio.h>

int main(){

  int N, M;// 8이상 50이하 N = 행 M = 열
  char chess[50][50];//[열][행]
  int k = 0;
  int kk = 0;

  scanf("%d %d", &M, &N);
  scanf("%s", chess);

  while (1){//반복
    
    int sum = 0;// 몇개 교체해야하는지
    if(N-8 < k){// 주어진 행을 넘어서려고 할때 초기화
      k = 0;
      kk++; // 열 하나를 내림
      if(kk>M-8){ // 주어진 열을 넘어서려고 하면 끝
        printf("%d\n", sum);
        return 0;
      }
    }
    for(int i = 0; i < 8; i++){// i = 열
      for(int j = 1; j < 7; j++){// j = 행
        if(chess[kk+i][k+j] == chess[kk+i][k+j+1]&&chess[kk+i-1][k+j-1] != chess[kk+i][k+j]){
          sum += 1;
        } 
      }
    }
    k++;
    
  }

  return 0;
}

