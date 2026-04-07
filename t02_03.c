// 12S25018 - Ribka Sianturi

#include <stdio.h>

typedef struct {
    char op;
    int hasil;
    int count;
} Operasi;

int main(int _argv, char **_argc)
{
   Operasi o;
  int num;

  scanf("%c", &o.op);

  if (o.op == '+') o.hasil = 0;
  else if (o.op == '-') o.hasil = 0;
  else if (o.op == '*') o.hasil = 1;

  o.count = 0;

  printf("%c\n", o.op);

  while (o.count < 5) {
    scanf("%d", &num);
    printf("%d\n", num);

    if (num == -1) {
      printf("0\n");
      break;
    }

    if (o.op == '+') {
      o.hasil += num;
    } else if (o.op == '-') {
      o.hasil -= num;
    } else if (o.op == '*') {
      o.hasil *= num;
    }

    printf("%d\n", o.hasil);

    o.count++;
  }
  return 0;
}
