int* cut(int* tab,int rozmiar,int i0,int i1, int* wynikrozmiar){

    *wynikrozmiar = rozmiar - (i1-i0);

    int* tabNowa = (int*)malloc(*wynikrozmiar * sizeof(int));

    for(int i = 0; i <i0;i++){
        tabNowa[i] = tab[i];
    }

    for(int i = i1; i <rozmiar;i++){
        tabNowa[i - (i1 - i0)] = tab[i];
    }

    return tabNowa;
}

int* kopia(int* tab,int rozmiar,int i0,int i1, int* wynikrozmiar){

    *wynikrozmiar =(i1-i0);

    int* tabNowa = (int*)malloc(*wynikrozmiar * sizeof(int));

    for(int i = i1; i <rozmiar;i++){
        tabNowa[i - (i0)] = tab[i];
    }

    return tabNowa;
}

int* wklej(int* tab,int rozmiar1,int* tab2,int rozmiar2,int idx, int* wynikrozmiar){

        *wynikrozmiar = (rozmiar1+rozmiar2)*2;


        int* tabNowa = (int*)malloc(*wynikrozmiar * sizeof(int));

        for(int i = 0; i <idx;i++){
        tabNowa[i+idx] = tab[i];
        }

        for(int i = 0; i <rozmiar2;i++){
        tabNowa[i+idx] = tab2[i];
        }

        for(int i = idx; i <rozmiar2;i++){
        tabNowa[idx + rozmiar2 + i -idx] = tab[i];
        }

        return tabNowa;


}
