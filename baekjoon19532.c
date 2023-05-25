#include<stdio.h>

int main(void){

  int a, b, c, d, e, f;
  int x = -999, y= -999;
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

  for(x = -999; x<=999; x++){//다 집어넣기
    for(y = -999; y <= 999; y++){
      if((a * x) + (b * y) == c && (d * x) + (e * y) == f){//조건 충족시 출력
        printf("%d %d", x, y);
        return 0;
      }
    }
  }
  return 0;
}