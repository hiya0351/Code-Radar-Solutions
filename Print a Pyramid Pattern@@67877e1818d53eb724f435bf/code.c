#include<stdio.h>
int main(){
     int n;
        scanf("%d",&n);
         int nst=1,nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        for(int l=1;l<=nsp;l++){
            printf(" ");
        }
        nst =nst+2;
        nsp--;
        printf("\n");
            }
            return 0;
}