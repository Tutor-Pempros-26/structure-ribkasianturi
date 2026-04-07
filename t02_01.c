// 12S25018 - Ribka Sianturi


#include <stdio.h>

typedef struct {
    int jumlah;
    double harga;
    double total;
    double diskon;
    double bayar;
} Transaksi;

int main(int _argv, char **_argc)
{
  Transaksi t;

  scanf("%d", &t.jumlah);
  scanf("%lf", &t.harga);

  t.total = t.jumlah * t.harga;
  t.diskon = 0;

  if (t.total > 500000) {
    t.diskon = t.total * 0.15;
  } else if (t.total >= 100000) {
    t.diskon = t.total * 0.10;
  } else if (t.total > 50000) {
    t.diskon = t.total * 0.05;
  }

  t.bayar = t.total - t.diskon;

  if (t.diskon == 0) {
    printf("---\n");
  } else {
    printf("%.2lf\n", t.diskon);
  }

  printf("%.2lf\n", t.bayar);
  
  return 0;

}
