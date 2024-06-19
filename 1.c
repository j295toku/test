#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  if(scanf("%d", &n) != 1)
    {
      printf("入力エラー\n");
      return 1;
    }
  
  if( (n & 1) == 0 )//()がないことによって==の演算子の方が優先されていた点を修正
  {
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
