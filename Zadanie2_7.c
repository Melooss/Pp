#include <stdio.h>
#include <stdlib.h>
#include "cut7.h"


int main(){
    int tab[] = {1,2,4,5,7,8};
    int rozmiar = sizeof(tab) / sizeof(tab[0]);
    int WynikRozmiar;
    int* tabNowa;

    tabNowa = cut(tab,rozmiar,2,4,&WynikRozmiar);

        for(int i = 0; i < rozmiar;i++){
            printf("%d ",tabNowa[i]);
        }
    printf("\n");
    tabNowa = kopia(tab, rozmiar,2,4,&WynikRozmiar);
    for(int i = 0;i<rozmiar;i++){
        printf("%d ",tabNowa[i]);
    }
    printf("\n");
    int tab2[]={3,6,9};
    int rozmiar2 = sizeof(tab2) / sizeof(tab2[0]);
    tabNowa = wklej(tab,rozmiar,tab2,rozmiar2,2,&WynikRozmiar);
    for(int i = 0;i<rozmiar;i++){
        printf("%d ",tabNowa[i]);
    }
    free(tabNowa);



    return 0;

}
