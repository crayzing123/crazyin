#include<stdio.h>

int main(){

  int i = 0;
  int N;
  scanf("%d", &N);

  while(1){
    if(i >= N){//모든 경우에 생성자가 없을 경우
      i = 0;
      printf("%d", i);
      return 0;
    }
    
    if(i < 10){//i이 한자리수
      if(N == i+i){
        printf("%d", i);
        return 0;
      }
    }else if(i < 100){//i이 두자리수
      if(N == i/10 + i%10 + i){
        printf("%d", i);
        return 0;
      }
    }else if(i < 1000){//i이 세자리
      if(N == i + i/100 + (i%100)/10 + (i%10)){
        printf("%d", i);
        return 0;
      }
    }else if(i < 10000){//i이 네자리
      if(N == i + i/1000 + (i%1000)/100 + (i%100)/10 + (i%10)){
        printf("%d", i);
        return 0;
      }
    }else if(i < 100000){//i이 다섯자리
      if(N == i + i/10000 + (i%10000)/1000 + (i%1000)/100 + (i%100)/10 + (i%10)){
        printf("%d", i);
        return 0;
      }
    }else if(i < 1000000){//i이 여섯자리
      if(N == i + i/100000 + (i%100000)/10000 + (i%10000)/1000 + (i%1000)/100 + (i%100)/10 + (i%10)){
        printf("%d", i);
        return 0;
      }
    }
    i++;
  }

  return 0;
}