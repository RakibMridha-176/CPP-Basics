//insertion sort

#include<iostream>
#include<algorithm>
using namespace std;

int main()
 {
     int n,j;
     cin>>n;
     int arr[n];
     for (int i=0; i<n; i++)
        cin>>arr[i];
     for (int i=1; i<n; i++)
     {

         j=i;
         while(arr[j]<arr[j-1]&&j>0)
         {
            //t=arr[j];
            //arr[j]=arr[j-1];
            //arr[j-1]=t;
            swap( arr[j], arr[j-1]);
            j--;
         }

     }
     for (int i=0; i<n; i++)
            cout<<arr[i]<<",";


return 0;
 }
