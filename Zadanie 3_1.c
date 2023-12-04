#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
    int i;
    int tab[N];
    int n,m;
    int suma = 0;
    int sp = 0,snp = 0;
    int ip = 0 , inp = 0;

    int min = tab[0];
    int max = tab[0];

    srand(time(NULL));

    printf("Podaj zakres tabeli\n");
    scanf("%d %d", &n , &m);



    for(i = 0; i <= N; i++){
        tab[i] = rand()%m + n;
        printf("%d\n", tab[i]);
        suma += tab[i];

        if(tab[i] % 2 == 0){
            sp += tab[i];
        }else{
            snp += tab[i];
        }

        if( i % 2 == 0){
            ip += tab[i];
        }else{
            inp += tab[i];
        }



        if(tab[i] >= max){
            max = tab[i];
        }

        if(tab[i] <= min){
        min = tab[i];
        }
    }
    int numer = tab[0];
    int domi= 1;
    for(i = 1; i < N;i++){
        if(tab[i] == numer){
            domi++;
            }else{
            domi--;
            }if(domi < 0){
                numer = tab[i];
                domi = 1;
            }
    }
    int j,licz;

    for(i = 0;i<N;i++){
        for(j=i+1;j<N;j++){
            licz = 0;
            if(tab[j] == -1){
                continue;
            }if(tab[i] == tab[j]){
                licz++;
                tab[j]--;
            }
        }
    printf("%d powtorzylo sie %d\n",tab[i],licz);

    }





    printf("Suma wynosi: %d\n",suma);
    printf("Srednia wynosi: %0.2f\n", 1.0*suma/N);
    printf("Suma liczb parzystych wynosi: %d\n",sp);
    printf("Suma liczb nie parzystych wynosi: %d\n",snp);
    printf("Suma liczb o parzystych indeksach wynosi: %d\n",ip);
    printf("Suma liczb o nie parzystych indeksach wynosi: %d\n",inp);
    printf("minimuim wynosi: %d\n",min);
    printf("maximum wynosi: %d\n",max);
    printf("Dominanta: %d\n", numer);
    return 0;
}
