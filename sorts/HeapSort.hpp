#include <iostream>
using namespace std;

template<class T>
void heapify(T arr[], T n, T root){
   T largest = root; 
   T l = 2*root + 1; 
   T r = 2*root + 2; 
  
   if (l < n && arr[l] > arr[largest]){
       largest = l;
   }
  
   if (r < n && arr[r] > arr[largest]){
      largest = r;
   }
     
   if (largest != root){
      swap(arr[root], arr[largest]);
  
      heapify(arr, n, largest);
   }
}
  
template<class T>
void heapSort(T arr[], T n){
   for (T i = n / 2 - 1; i >= 0; i--){
       heapify<T>(arr, n, i);
   }
    
   for (T i=n-1; i>=0; i--){
      swap(arr[0], arr[i]);
  
      heapify<T>(arr, i, 0);
   }
}
  
