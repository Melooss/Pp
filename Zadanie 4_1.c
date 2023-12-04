#include <stdio.h>
#define N 10
int main(){
    int i = 0;
    char c[N];
    int niecyfra = 0;
    printf("Napisz cos\n");
    gets(c);

    for(i = 0; i < N != '\0'; i++){
        if(c[i] >= '0' && c[i] <= '9'){
            if(niecyfra==1)
                printf(",");
            printf("%c", c[i]);
            niecyfra = 0;
            }else{
                niecyfra = 1;
            }
        }
    }

