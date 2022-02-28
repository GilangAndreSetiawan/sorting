#include <stdio.h>
#include <stdlib.h>

//BUBBLE SORT

void Bubble_Sort (int arr[], int n)
{
    int i, j, angka;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                angka = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = angka;
            }
        }
    }
}
int main()
{
    int array[100]={56,45,23,5,6,8,43,567,32};
    Bubble_Sort (array,9);

    printf("Hasil pengurutan : \n");
    for(int i = 0; i < 9; i++){
        printf("%d ", array [i]);
    }
    printf("\n");
}