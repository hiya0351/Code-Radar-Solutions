#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&a);
    if(a=="i"|| a=="e" || a=="o"||a=="u" || a=="a"||a=="A"||a=="E"||a=="I"||a=="O"||a=="U"){
        printf("Vowel");
    }
    else if((a>='A' && a<='Z') && (a>='a'&&a<=z)){
        printf("Consonant");
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}