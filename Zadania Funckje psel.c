#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define N 30
//funckja poprawnosci
bool sprawdzPesel(char pesel[12]) {
    // Sprawdzenie czy PESEL składa się z 11 cyfr
    if (strlen(pesel) != 11) {
        return false;
    }

    // Obliczenie sumy zgodnie z algorytmem
    int suma = 1 * (pesel[0] - '0') + 3 * (pesel[1] - '0') + 7 * (pesel[2] - '0') + 9 * (pesel[3] - '0') +
                1 * (pesel[4] - '0') + 3 * (pesel[5] - '0') + 7 * (pesel[6] - '0') + 9 * (pesel[7] - '0') +
                1 * (pesel[8] - '0') + 3 * (pesel[9] - '0');

    // Odejmowanie od liczby 10
    int ostatniaCyfra = (10 - (suma % 10)) % 10;

    // Sprawdzenie zgodności z ostatnią cyfrą numeru PESEL
    return (ostatniaCyfra == pesel[10] - '0');
}
//funkcja wartosci przesuniecia
int przesuniecie(char pesel[12]){
    int rok = 10 *(pesel[0] - '0') + (pesel[1] - '0'); // zamiast 0 + 3 = 3 da 03
    int miesiac = 10 *(pesel[2] - '0') + (pesel[3] - '0');
    int dzien = 10 *(pesel[4] - '0') + (pesel[5] - '0');

    if( rok >= 00){
        rok+20;
    }
    int k = ((rok+miesiac+dzien)%25)+1;

    return k;

}
//funkcja szyfrujaca
void szyfruj(char tekst[], int K, char zaszyfrowany[]) {
    int i = 0;
    while(tekst[i] != '\0'){
        if(tekst[i] >= 'a' && tekst[i] <= 'z' || tekst[i] >= 'A' && tekst[i] <= 'Z'){
            char b;
            if(tekst[i] >= 'a' && tekst[i] <= 'z'){
                b = 'a';
            }else{
                b = 'A';
            }
            zaszyfrowany[i] = (tekst[i]- b + K) % 26 + b;}
            else if(tekst[i] >= '0' && tekst[i] <= '9'){
                zaszyfrowany[i] = (tekst[i] - '0' + K) % 10 + '0';
            }else{
                zaszyfrowany[i] = tekst[i];
            }

        i++;
    }

    zaszyfrowany[i] = '\0';
}

//funkcja deszyfrujaca


#include <stdio.h>
#include <stdbool.h>

// Funkcja sprawdzająca poprawność numeru PESEL


int main() {
    char pesel[12];
    printf("Podaj numer PESEL: ");
    scanf("%s", pesel);

    if (sprawdzPesel(pesel)) {
        printf("Jaka operacje wykonac\n");
        printf("1 - szyfrowanie\n");
        printf("2 - deszyfrowanie\n");

        int K = przesuniecie(pesel);

        int x;

        scanf("%d",&x);
        switch(x){
            case 1:
                char szyfrowany[50];
                szyfruj(pesel, K, szyfrowany);
                printf("Zaszyfrowany pesel to %s\n",szyfrowany);\
                printf("%d", K);
                break;
            case 2:
                break;
        }
    } else {
        printf("Numer PESEL jest niepoprawny.\n");
    }

    return 0;
}


