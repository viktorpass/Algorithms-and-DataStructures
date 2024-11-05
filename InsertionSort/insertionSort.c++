#include <iostream>
using namespace std;
int main(){
    int i,j,key;
    int numbers[] = {2,6,3,1,65,4353};
    for(j=1;j<=5;j++){
        key = numbers[j];

        i = j -1;

        while(i >= 0 && numbers[i] > key){
            numbers[i+1] = numbers[i];
            i = i -1;
        }
        numbers[i+1] = key;
    }
    for(int a = 0;a<=5;a++){
        cout<< numbers[a] << " ";
    }

}

 