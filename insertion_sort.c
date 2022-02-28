#include <stdio.h>
#include <stdlib.h>

//INSERTION SORT

void insertionSort(int *Data, int n){
    int temp, j;

    for (int i = 1; i <= n-1; i++){
        temp = Data[i];
        j = i-1;

        while(j>=0 && Data[j] > temp){
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
    }
}

void print(int* Data, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main(){

    int Data[] = {23, 67, 89, 5, 45, 20, 15, 27};


	int n = sizeof(Data)/sizeof(Data[0]);

    printf("Sebelum Sort: ");
    print(Data, n);

    printf("Sesudah Sort: ");
    insertionSort(Data, n);
    print(Data, n);
    return 0;
}