#include<iostream>
using namespace std;

// int getUnique(int arr[], int n){
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
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
    int i, j;
    for(i = 0; i < countzero; i++){
        arr[i] = 0;
    }
    for(j = i; j <n; j++){
        arr[j]= 1;
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
