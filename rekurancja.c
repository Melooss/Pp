#include <stdio.h>

void buble(int tab[],int n){
        for(int i = 0;i<n-1;i++){
            for(int j = 1;j< n-1;j++){
                if(tab[j] > tab[j+1]){
                    tab[j+1] = tab[j];
                    int tmp = tab[j+1];
                    tab[j] = tmp;
                }
            }
        }
        for(int i = 0; i<n;i++){
            printf("%d ",tab[i]);
        }
    }

int main(){
    int tab[] = {1,5,6,4,7,8,10};
    int n = 7;
    buble(tab,n);

}
