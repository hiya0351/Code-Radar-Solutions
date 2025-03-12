#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<i;j++){
            printf("*",j);
        }
        for(k=0;k<=a-i;k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}