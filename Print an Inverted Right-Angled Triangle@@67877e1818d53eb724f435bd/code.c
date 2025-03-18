#include<stdio.h>
int main(){
  int a,i,j;
  scanf("%d",&a);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("*");
    }
    for(k=0;k<=n-i;k++){
      printf(" ");
    }
  }
  return 0;
}