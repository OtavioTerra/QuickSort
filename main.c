#include <stdio.h>

typedef int tipoDado;

void quickSort(tipoDado array[], int begin, int end){
    int i, j, pivo, aux;
    i = begin;
    j = end - 1; 

    pivo = array[(i + j)/2];
    while(i <= j){
        while(array[i] < pivo && i < end){
            i++;
        }
        while (array[j] > pivo && j > begin){
            j--;
        }
        if(i <= j){
            aux = array[i];
            array[i] = array[j];
            array[j] = aux;
            i++;
            j++;
        }
    }
    if(begin < j){
        quickSort(array, begin, j+1);
    }
    if(i < end){
        quickSort(array, i, end);
    }
}


int main(){
    tipoDado array[5] = {9,3,55,60,22};

    printf("Array desordenado: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",array[i]);
    }

    quickSort(array, 0, 5);

    printf("\n\nArray ordenado: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",array[i]);
    }

    printf("\n");

    return 0;
}