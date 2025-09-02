#include <iostream>
#include <vector>
using namespace std;   

void neginfirst(int arr[], int n){
    int j = 0;
    for(int index = 0; index < n; index++){
        if(arr[index] < 0 ){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[ ]= {1,23, 45, -78, -34, 44, -70};
    int n = 7;

    neginfirst(arr, n);

    for(int i =0 ; i <n; i++){
        cout<<arr[i]<<" ";
    }
}
