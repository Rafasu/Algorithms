/*
To Learn more about: https://www.geeksforgeeks.org/insertion-sort/
*/
#include <iostream>

using namespace std ;

void printArray(int length, int* arrayN){
    int i;
    for(i = 0; i < length; i++){
        cout << arrayN[i] << " ";
    }
    cout << endl;
    return;
}

void insertionSort(int length, int* arrayN){
    int i,j, temp ;
    for(i = 1; i < length ; i++){
        for(j = i; ((j >= 0 )&& (arrayN[j] > arrayN[j - 1])); j--){
            //Swap
            temp = arrayN[j-1];
            arrayN[j-1] = arrayN[j];
            arrayN[j] = temp;
        }
    }
    return;
}


int main(){
    int numArray[7] = {5,16,9,2,4,21,2};
    printArray(7,numArray);
    insertionSort(7, numArray);
    cout<<endl;
    printArray(7, numArray);

    return 0;
}
