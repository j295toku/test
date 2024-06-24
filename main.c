#include <stdio.h>
#include <stdlib.h>//malloc関数とfree関数を利用できるようにするために追加
#include <math.h>//sqrt関数を使えるようにするために追加

double myRoot(double x)//返り値を実数にするためにdouble型に変更
{
  double y;//返り値を実数にするためにdouble型にする
  if( x < 0  || isnan(x)){//0の時も実行されるように=演算子を除く。-1.#IND00への対応としてisnanを追加
    printf("エラー：0以上の値ではありません in myRoot()\n");
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i = 0;//初期化する
  double *x = (double *)malloc(sizeof(double) * 101);//100個分ではなくて101個分(0~100)のメモリ領域を用意

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //これ以降は確認用コードなので、修正しないこと
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);
  //myRoot()の動作確認
  printf("myRoot(0.0 / 0.0)=%f\n", myRoot(0.0 / 0.0));
      
  free(x);
  return 0;
}
