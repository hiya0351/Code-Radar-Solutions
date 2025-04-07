#inclue<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=n;
    for(int i=1;i<=n;i++){
        int a=1;
        char d=(char)a+64;
        for(int j=1;j<=nst;j++){
           printf("%c",d);
        }
        nst--;
        printf("\n");
    }
    return 0;
}