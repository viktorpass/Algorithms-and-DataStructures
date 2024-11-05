#include <iostream>
using namespace std;

void InsertionSort(int array[], int size){
    int i,j,key;
    for(j=1; j <= size; j++){
        key = array[j];
        i = j - 1;

        while(i>=0 && array[i] > key){
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}

void printArray(int array[], int size){
    for(int i = 0; i <= size; i++){
        cout<< array[i] << " " ;
    }
}

int main(){
    int array[] = {4,7,12,66,34,23,11,2,27,1};
    int size = sizeof(array) / sizeof(array[0]);

    InsertionSort(array,size);
    printArray(array,size);


    return 0;

}

 