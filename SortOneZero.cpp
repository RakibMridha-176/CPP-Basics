#include<iostream>
using namespace std;


 void sortzeroone(int arr[], int n){
    int countzero = 0;
    int countone = 0;
    for(int i =0 ; i <n ; i++){
        if(arr[i] == 0){
            countzero ++;
        }
        if(arr[i] == 1){
            countone++;
        }
    }
    // int i, j;
    // for(i = 0; i < countzero; i++){
    //     arr[i] = 0;
    // }
    // for(j = i; j <n; j++){
    //     arr[j]= 1;
    // }

   int index = 0;
    while(countzero--){
        arr[index] = 0;
        index++;
    }
    while(countone--){
        arr[index]= 1;
        index++;
    }
 }


int main(){
    int arr[] = {1,0 ,0 , 0 , 0,1 ,1 ,0};
    int n = 8;
    sortzeroone(arr, n);
    for(int i =0; i < n; i++ ){
        cout<< arr[i]<< "  ";
    }
    
}
