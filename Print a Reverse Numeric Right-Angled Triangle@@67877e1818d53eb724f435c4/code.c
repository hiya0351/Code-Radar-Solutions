#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        printf("\n");
        nst--;
        nsp++;
    }
    return 0;
}