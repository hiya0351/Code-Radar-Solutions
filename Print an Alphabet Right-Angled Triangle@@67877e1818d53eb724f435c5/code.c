#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        char d=(char)a+64;
        for(int j=1;j<=i;j++){
            printf("%c ",d);
            d++;
        }
        printf("\n");
    }
    return 0;
}