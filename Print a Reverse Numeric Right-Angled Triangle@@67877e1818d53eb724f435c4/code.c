#include<stdio.h>
int main(){
    int n;
    int nst=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=0;j<nst;j++){
            printf("%d",j);
        }
        for(int k=0;k<nsp;k++){
            printf(" ");
        }
    }
    return 0;
}