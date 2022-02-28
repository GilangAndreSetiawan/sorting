#include <stdio.h>
#include <stdlib.h>

//SELECTION SORT

void swap(int *a, int *b){
    int x=*a;
    *a=*b;
    *b=x;
    }

    void selectionSort(int array[],int size){
    for (int awal=0; awal<size-1; awal++){
        int min_idx=awal;
        for (int i=awal+1; i<size; i++){
            if (array[i]<array[min_idx])
                min_idx=i;
        }
        swap(&array[min_idx],&array[awal]);
    }
    }
    void prinArray(int array[],int size){
    for (int i=0;i<size;++i){
        printf("%d ",array[i]);
    }
    printf("\n");
    }

    int main()
    {
    int data[]={23, 67, 89, 5, 45, 20, 15, 27};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data, size);
    printf("array setelah disusun dari kecil kebesar : \n");
    prinArray(data, size);

}