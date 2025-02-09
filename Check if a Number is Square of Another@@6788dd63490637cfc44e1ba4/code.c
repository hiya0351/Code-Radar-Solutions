#include <stdio.h>
#include<math.h>
int main(){
    int a,b,square;
    scanf("%d %d",&a,&b);
    square=b**b;
    if(a==square){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}