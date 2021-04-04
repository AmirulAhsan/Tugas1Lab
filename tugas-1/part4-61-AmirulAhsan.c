#include <stdio.h>

int main() {
  int p,l;
  int n = 2;

  printf("\nInput p :");
  scanf("%d",&p);
  printf("\nInput l :");
  scanf("%d",&l);
  if(p>10 || l>10){
    printf("\nError\n");
  }
  else{
    printf("\n_________________\n");
    for(int i=1;i<=p;i++){
      for(int j=1;j<=l;j++){
        for(int k=1;k<=n;k++){
          printf(" [|%d|  |%d|  |%d|] \n",i,j,k);

        }
      }
    }     printf("_________________\n");
  }

  return 0;
}
