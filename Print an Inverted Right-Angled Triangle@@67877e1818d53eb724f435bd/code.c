#include<stdio.h>
int main(){
  int n,i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n+1-i;j++){
      printf("* ");
    }
    for(k=0;k<=n-i;k++){
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}