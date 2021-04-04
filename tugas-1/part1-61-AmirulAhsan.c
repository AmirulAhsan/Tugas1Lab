#include <stdio.h>

int main(){
  char nama[30];
  char darah='O';
  int usia,berat,tinggi;

  printf("\n Nama :");scanf(" %[^\n]s",nama);

  printf("\n Usia :");scanf("%d",&usia);

  printf("\n Berat badan :");scanf("%d",&berat);

  printf("\n Tinggi badan :");scanf("%d",&tinggi);

  printf("\n Golongan darah %c\n",darah);

  printf("\n Data untuk Surat Kesehatan golongan darah O :\n %s\n %d tahun\n %d kg\n %d cm\n %c",nama,usia,berat,tinggi,darah);

return 0;
}
