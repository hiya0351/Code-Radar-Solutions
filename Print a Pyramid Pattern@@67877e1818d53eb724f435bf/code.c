#include<stdio.h>
int main(){
    scanf("%d",&n);
      int nst=1,nsp=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1;k<=nst;k++){
            printf("*");
        }
        for(l=1;l<=nsp;l++){
            printf(" ");
        }
        printf("\n");
            }
            return 0;
}