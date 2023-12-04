#include <stdio.h>
#define N 20
int main(){
    char napis[N];
    int i;
    printf("Podaj napis max %d znakow\n", N-1);
    gets(napis);


    for( i = 0; i < napis[i] != '\0';i++){
        if(napis[i]>=97 && napis[i]<= 122){
            napis[i] = napis[i]+13;
            if(napis[i]+13 >= 122){
                napis[i] = 97 + (13 - (122 -napis[i]));
            }
        }
        /*}else if(napis[i]>=65 && napis[i]<=90){
            napis[i] = napis[i]+13;
            if( napis[i]>= 90-13){
                napis[i] = napis[i]+13;
            }
        }*/
        printf("%c", napis[i]);
    }
}


