/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void bubble_sort( int a[], int n){
    for(int times=0; times<=n-1; times++){
        for(int i=0; i <= n - times -1;i++){
            if (a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
}

int main()
{
   int arr[]={-22,12,4,5,88,3,15,-1};
   int n=sizeof(arr)/sizeof(int);
 
   bubble_sort(arr,n);
   
for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}
    return 0;
}
