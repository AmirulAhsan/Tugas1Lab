#include <stdio.h>

int main(){
  int m,n,p,q;
  int s = 9;
  float hasil;

  printf("Input m :",m);scanf("%d",&m);
  printf("Input n :",n);scanf("%d",&n);
  printf("s : %d",++s);
  p = m * s + n;
  q = m + s + n;
  hasil = (float)p / (float)q;
  printf("\nHasil Perhitungan : %.2f\n",hasil);
return 0;
}
