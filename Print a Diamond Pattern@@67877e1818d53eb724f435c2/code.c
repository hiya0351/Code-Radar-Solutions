#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n;
    if(n%2==0){
        n++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
           printf(" ");
        }
        for(int k=1;k<=nst;k++){
           printf("*");
        }
        if(i<(n/2)+1){
            nst=nst+2;
            nsp--;
        }
        else{
            nst=nst-2;
            nsp++;
        }
        
         printf("\n");
    }
    return 0;
}