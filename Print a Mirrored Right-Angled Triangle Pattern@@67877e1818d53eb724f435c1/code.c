#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}