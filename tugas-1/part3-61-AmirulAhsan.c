#include <stdio.h>

int main(){
  int hp ;
  int a,b;
//  char a[10] = 'Android';
//  char b[10] = 'Apple';

  printf("\n 1.Android");
  printf("\n 2.Apple");

  printf("\n Masukkan jenis hp yg anda inginkan :");
  scanf(" %i",&hp);

  if(hp==1){
    printf("\n 1.Samsung A72 \n 2.Xiaomi Mi 10T\n");
    printf(" Anda mau yg mana :");
    scanf("%i",&a);
    if(a==1){
      printf(" Harganya Rp 5.999.000,-");
    }
    else if(a==2){
      printf(" Harganya Rp 4.999.000,-");
    }
  }
  else if(hp==2){
    printf("\n 1.Iphone X \n 2.Iphone 12 \n");
    printf(" Anda mau yg mana :");
    scanf("%i",&b);
    if(b==1){
      printf(" Harganya Rp 10.000.000,-");
    }
    if(b==2){
      printf(" Harganya Rp 20.000.000,-");
    }
  }
  else{
    printf("\n Silahkan lihat-lihat dulu\n");
  }

  printf("\n Terima kasih telah berkunjung \n");
  return 0;
}
