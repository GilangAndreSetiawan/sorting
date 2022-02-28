#include <stdio.h>
#include <stdlib.h>

//SELECTION SORT CHALLENGE GENAP

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void SelectionSort (int Data[ ], int x) {
	    int min;

        for(int i = 0; i < x-1 ; i++)  {
             min = i ;
            for(int j = i+1; j < x ; j++ ) {
                if(Data[ j ] < Data[ min ])  {
                min = j ;
                }
             }
          swap (&Data[ min ], &Data[ i ]) ;
        }
    }
void print(int* Data, int x){
    for (int i = 0; i < x; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}
int main(){
    int Data[] = {34, 72, 15, 3, 24, 10};
	int x = sizeof(Data)/sizeof(Data[0]);

    printf("Sebelum disusun: ");
    print(Data, x);

    printf("Sesudah disusun: ");
    SelectionSort(Data, x);
    print(Data, x);
    return 0;
}