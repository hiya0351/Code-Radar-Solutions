#include <stdio.h>

int main(){
    float a,b;
    char c;
    scanf("%f %c %f", &a, &c, &b);
    

    if(c=='+'){
        printf("%.2f",a+b);
    }
    else if(c=='-'){
        printf("%.2f",a-b);
    }
    else if(c=='*'){
        printf("%.2f",a*b);
    }
    else if(c=='/'){
        if(b==0){
        printf("error in division");
        }
        else{
            printf("%.2f",a/b);
        }
    }
    else{
        printf("error");
    }
return 0;
}