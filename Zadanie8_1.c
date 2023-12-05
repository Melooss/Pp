#include <stdio.h>
#include <stdlib.h>


/*Napisz program będący symulacją koszyka w sklepie spożywczym.

    1Zdefiniuj w programie tablicę z produktami.
    2Korzystając z tablicy produktów wygeneruj losowo zawartość koszyka - liczbę pozycji w koszyku wczytaj od użytkownika.
    3Wyświetl na ekranie "paragon" za dokonane zakupy
*/


struct produkt{
    int id;
    char nazwa[20];
    float cena;
};
struct pozycja_koszyka{
    int id;
    int liczba_sztuk;
};
