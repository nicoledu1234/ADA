#include <bits/stdc++.h>
using namespace std;
 
template<class T>
void swap(T* a, T* b){
    T t = *a;
    *a = *b;
    *b = t;
}
 
template<class T>
int divide (T arr[], T low, T high){
    T pivot = arr[high]; 
    T i = (low - 1); 
 
    for (T j = low; j <= high - 1; j++){
       
        if (arr[j] < pivot){
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

template<class T>
void quickSort(T arr[], T low, T high){
    if (low < high){

        T pi = divide<T>(arr, low, high);

        quickSort<T>(arr, low, pi - 1);
        quickSort<T>(arr, pi + 1, high);
    }
}

 

