#include <stdio.h>
#define MAX_DL 100
#define N 3
#define M 4
/*int main(){
    int i = 0;
    int LM = 0,LD=0,LC=0,LINNYCH=0;

    char znak = 'a';
    printf("%d%c\n",znak,znak);
    char napis[MAX_DL];

    printf("Podaj napis max %d znakow\n", MAX_DL-1);
    gets(napis);




    for( i = 0; i < napis[i] != '\0';i++){
        if(napis[i]>=97 && napis[i]<= 122){
        LM++;
        }else if(napis[i]>=65 && napis[i]<=90){
            LD++;
        }else if(napis[i]>=48 && napis[i]<=57){
            LC++;
        }else{
            LINNYCH++;
            }
    }

        printf("Liczba malych: %d\n",LM);
        printf("Liczba duzych: %d\n",LD);
        printf("Liczba cyfr: %d\n",LC);
        printf("Liczba innych: %d\n",LINNYCH);

}*/

int main(){
    int tab[N][M];
    int i;
    int j;

    for(i = 0; i < N; i++){
        for(j = 0; j < M;j++){
            tab[i][j] = (i+1)*10+j+1;
        }
    }


    for(i = 0; i < N; i++){
        for(j = 0; j < M;j++){
            printf("%2d ",tab[i][j]);
        }
        printf("\n");
    }

}
