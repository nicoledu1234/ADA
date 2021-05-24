#include <bits/stdc++.h>
#include "QuickSort.hpp"
#include "HeapSort.hpp"
#include "ShellSort.hpp"
#include "CountingSort.hpp"
#include "BucketSort.hpp"
#include "MergeSort.hpp"
#include "RadixSort.hpp"
#include "GnomeSort.hpp"

using namespace std;



int main()
{
    
    int n = 6;
    int quickSort_arr[] = {10, 7, 8, 9, 1, 5};
    int heapSort_arr[] = {10, 7, 8, 9, 1, 5};
    int shellSort_arr[] = {10, 7, 8, 9, 1, 5};
     int countingSort_arr[] = {10, 7, 8, 9, 1, 5};
     int bucketSort_arr[] = {10, 7, 8, 9, 1, 5};
     int mergeSort_arr[] = {10, 7, 8, 9, 1, 5};
     int radixSort_arr[] = {10, 7, 8, 9, 1, 5};

     int gnomeSort_arr[] = {10, 7, 8, 9, 1, 5};
    quickSort(quickSort_arr, 0, n - 1);
    cout << "quickSort:"<<endl;
    printArray<int>(quickSort_arr, n);

   heapSort(heapSort_arr, n);
   cout << "heapSort:"<<endl;
    printArray<int>(heapSort_arr, n);
  
	shellSort(shellSort_arr, n);
    cout << "shellSort:"<<endl;
    printArray<int>(shellSort_arr, n);

  countingSort(countingSort_arr, n);
  cout << "countingSort:"<<endl;
    printArray(countingSort_arr, n);
 
float arr[]
        = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int e = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, e);
    printArray<float>(arr, e);

mergeSort(mergeSort_arr, n);
    cout << "mergeSort:"<<endl;
    printArray<int>(mergeSort_arr, n);

    radixSort(radixSort_arr, n);
    cout << "radixSort:"<<endl;
    printArray<int>(radixSort_arr, n);

    gnomeSort(gnomeSort_arr, n);
    cout << "gnomeSort:"<<endl;
    printArray<int>(gnomeSort_arr, n);
    return 0;
}