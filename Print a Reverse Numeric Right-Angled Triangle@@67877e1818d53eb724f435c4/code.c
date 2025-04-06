#include<stdio.h>
int main(){
    int n;
    int nst=n;
    int nsp=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nst++;
        nsp--;
    }
    return 0;
}