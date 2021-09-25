#include <stdio.h>

#define arraysize(arr)  sizeof(arr)/sizeof(*arr);
void Bubblesort(char *arr, int len);

char str1f[] = {2, 4, 5, 6, 6, 8 , 9 , 1, 2, 6};



int main(void){


    return 1;

}


void Bubblesort(char *arr, int len){

    int i,j;
    char yTemp;

    for(i = 0; i < len ; i++){

        for(j = 1; j < len - 1 ; j++){

            if(arr[i] > arr[j]){

                yTemp = arr[i];
                arr[i] = arr[j];
                arr[j] = yTemp;
            }            
        }
    }

}