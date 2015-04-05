//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void SelectionSort(int v[],int n){
    int i,max,j,scambio;
    
    for(i=n-1;i>0;i--){
        max=i;
        
        for(j=i-1;j>=0;j--){
            if(v[j]>v[max]){
                max=j;
            }
        }
        
        scambio=v[i];
        v[i]=v[max];
        v[max]=scambio;
    }
}

int main(int argc, char** argv) {
    int i,v[N];
    
    srand(time(NULL));
    
    for(i=0;i<N;i++){
        v[i]=(rand()%100)+1;
        printf("Vettore[%d]: %d\n",i,v[i]);
    }
    
    SelectionSort(v,N);
    
    for(i=0;i<N;i++){
        printf("\nVettore[%d]: %d",i,v[i]);
    }

    return (EXIT_SUCCESS);
}
