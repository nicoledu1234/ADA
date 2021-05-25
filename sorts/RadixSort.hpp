#include <iostream>
using namespace std;

template<class T>
void countSort(T arr[], T n, T exp){
    T output[n]; 
    T i, count[10] = { 0 };
 
    for (i = 0; i < n; i++){
        count[(arr[i] / exp) % 10]++;
    }
       
    for (i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }
        
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++){
        arr[i] = output[i];
    }
        
}
 
template<class T>
void radixSort(T arr[], T n){
    
    T m = getMax<T>(arr, n);

    for (T exp = 1; m / exp > 0; exp *= 10){
        countSort<T>(arr, n, exp);
    }
        
}