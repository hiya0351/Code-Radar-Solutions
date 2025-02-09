#include <stdio.h>

int main(){
    int N,sum=0,i;
    scanf("%d",&i);
    for(N=1;N<=i;N++){
        sum=sum+N;
    }
    printf("%d",sum);
    return 0;
}