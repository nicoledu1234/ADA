#include <iostream>
using namespace std;


void heapify(int arr[], int n, int root)
{
   int largest = root; 
   int l = 2*root + 1; 
   int r = 2*root + 2; 
  
   if (l < n && arr[l] > arr[largest])
   largest = l;
  
   if (r < n && arr[r] > arr[largest])
   largest = r;
  
   if (largest != root)
      {
      swap(arr[root], arr[largest]);
  
      heapify(arr, n, largest);
      }
}
  
// implementing heap sort
void heapSort(int arr[], int n)
{
   // build heap
   for (int i = n / 2 - 1; i >= 0; i--)
   heapify(arr, n, i);
  
   // extracting elements from heap one by one
   for (int i=n-1; i>=0; i--)
   {
      // Move current root to end
      swap(arr[0], arr[i]);
  
      // again call max heapify on the reduced heap
      heapify(arr, i, 0);
   }
}
  
