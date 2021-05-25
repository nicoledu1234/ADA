#include <bits/stdc++.h>
#include "QuickSort.hpp"
#include "HeapSort.hpp"
#include "ShellSort.hpp"
#include "CountingSort.hpp"
#include "BucketSort.hpp"
#include "MergeSort.hpp"
#include "RadixSort.hpp"
#include "GnomeSort.hpp"
#include "MergeInsertionSort.hpp"
#include <ctime> 

using namespace std;


template<class T>
T mod(T t, T m) {
	T mo = -1;
	if (t < 0)
		return (t * mo >= m) ? (t - (t / m * m)) + m : t + m;
	return (t >= m) ? t - (t / m * m) : t;
}

template <class T>
void printArray(T arr[], T size)
{
    T i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
    long long size[]={10,100,1000,10000,100000,500000,1000000};
    cout<<"-------------------Para 5 dígitos:-------------------"<<endl;
    int i=0;
    while (i<7){
        long long tam = size[i];
        long long n=tam;
        cout<<"----------Para "<<tam<<" datos----------"<<endl;
        long long* quickSort_arr= new long long[tam];
        long long* heapSort_arr= new long long[tam];
        long long* shellSort_arr= new long long[tam];
        long long* countingSort_arr= new long long[tam];
        long long* bucketSort_arr= new long long[tam];
        long long* mergeSort_arr= new long long[tam];
        long long* radixSort_arr= new long long[tam];
        long long* gnomeSort_arr= new long long[tam];
        long long* mergeInsertionSort_arr= new long long[tam];

        long long aleatorio;
        for (long long i = 0; i <  tam; i++) {
            aleatorio =10000+rand()%(100000-10000);
            *(quickSort_arr+i) = aleatorio;
            *(heapSort_arr+i) = aleatorio;
            *(shellSort_arr+i) = aleatorio;
            *(countingSort_arr+i) = aleatorio;
            *(bucketSort_arr+i) = aleatorio;
            *(mergeSort_arr+i) = aleatorio;
            *(radixSort_arr+i) = aleatorio;
            *(gnomeSort_arr+i) = aleatorio;
            *(mergeInsertionSort_arr+i) = aleatorio;
        }
        unsigned t0, t1;
        double time;


        t0 = clock();
        long long o=0;
        quickSort<long long>(quickSort_arr, o, n - 1);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Quick Sort: " << "Execution Time: " << time << endl;
        //printArray<long long>(quickSort_arr, n);

        t0 = clock();
        heapSort<long long>(heapSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Heap Sort: "<< "Execution Time: " << time << endl;
        // printArray<long long>(heapSort_arr, n);

        t0 = clock();
        shellSort<long long>(shellSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Shell Sort:"<< "Execution Time: " << time << endl;
        //printArray<long long>(shellSort_arr, n);

        t0 = clock();
        countingSort(countingSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Counting Sort:"<< "Execution Time: " << time << endl;
        //printArray(countingSort_arr, n);

        t0 = clock();
        bucketSort<long long>(bucketSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Bucket Sort: "<< "Execution Time: " << time << endl;
        //printArray<long long>(bucketSort_arr, n);

        t0 = clock();
        mergeSort<long long>(mergeSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Merge Sort:"<<"Execution Time: " << time << endl;
        // printArray<long long>(mergeSort_arr, n);

        t0 = clock();
        radixSort<long long>(radixSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Radix Sort:"<<"Execution Time: " << time << endl;
        // printArray<long long>(radixSort_arr, n);

        t0 = clock();
        gnomeSort<long long>(gnomeSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Gnome Sort: "<< "Execution Time: " << time << endl;
        //printArray<long long>(gnomeSort_arr, n);


        t0 = clock();
        mergeInsertionSort<long long>(mergeInsertionSort_arr, n);
        t1 = clock();
        time = (double(t1 - t0) / CLOCKS_PER_SEC);
        cout << "Merge-Insertion Sort: "<<"Execution Time: " << time << endl;
        //printArray<long long>(mergeInsertionSort_arr, n);

        delete quickSort_arr;
        delete heapSort_arr;
        delete shellSort_arr;
        delete countingSort_arr;
        delete bucketSort_arr;
        delete mergeSort_arr;
        delete radixSort_arr;
        delete gnomeSort_arr;
        delete mergeInsertionSort_arr;
        i++;
        }

        cout<<"-------------------Para 10 dígitos:-------------------"<<endl;

        i=0;
        while (i<7){
            long long tam = size[i];
            long long n=tam;
            cout<<"----------Para "<<tam<<" datos----------"<<endl;
            long long* quickSort_arr= new long long[tam];
            long long* heapSort_arr= new long long[tam];
            long long* shellSort_arr= new long long[tam];
            long long* countingSort_arr= new long long[tam];
            long long* bucketSort_arr= new long long[tam];
            long long* mergeSort_arr= new long long[tam];
            long long* radixSort_arr= new long long[tam];
            long long* gnomeSort_arr= new long long[tam];
            long long* mergeInsertionSort_arr= new long long[tam];

            long long aleatorio;
            for (long long i = 0; i <  tam; i++) {
                aleatorio =1000000000+rand()%(10000000000-1000000000);
                *(quickSort_arr+i) = aleatorio;
                *(heapSort_arr+i) = aleatorio;
                *(shellSort_arr+i) = aleatorio;
                *(countingSort_arr+i) = aleatorio;
                *(bucketSort_arr+i) = aleatorio;
                *(mergeSort_arr+i) = aleatorio;
                *(radixSort_arr+i) = aleatorio;
                *(gnomeSort_arr+i) = aleatorio;
                *(mergeInsertionSort_arr+i) = aleatorio;
            }
            unsigned t0, t1;
            double time;


            t0 = clock();
            long long o=0;
            quickSort<long long>(quickSort_arr, o, n - 1);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Quick Sort: " << "Execution Time: " << time << endl;
            //printArray<long long>(quickSort_arr, n);

            t0 = clock();
            heapSort<long long>(heapSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Heap Sort: "<< "Execution Time: " << time << endl;
            // printArray<long long>(heapSort_arr, n);

            t0 = clock();
            shellSort<long long>(shellSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Shell Sort:"<< "Execution Time: " << time << endl;
            //printArray<long long>(shellSort_arr, n);

            t0 = clock();
            countingSort(countingSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Counting Sort:"<< "Execution Time: " << time << endl;
            //printArray(countingSort_arr, n);

            t0 = clock();
            bucketSort<long long>(bucketSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Bucket Sort: "<< "Execution Time: " << time << endl;
            //printArray<long long>(bucketSort_arr, n);

            t0 = clock();
            mergeSort<long long>(mergeSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Merge Sort:"<<"Execution Time: " << time << endl;
            // printArray<long long>(mergeSort_arr, n);

            t0 = clock();
            radixSort<long long>(radixSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Radix Sort:"<<"Execution Time: " << time << endl;
            // printArray<long long>(radixSort_arr, n);

            t0 = clock();
            gnomeSort<long long>(gnomeSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Gnome Sort: "<< "Execution Time: " << time << endl;
            //printArray<long long>(gnomeSort_arr, n);


            t0 = clock();
            mergeInsertionSort<long long>(mergeInsertionSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Merge-Insertion Sort: "<<"Execution Time: " << time << endl;
            //printArray<long long>(mergeInsertionSort_arr, n);

            delete quickSort_arr;
            delete heapSort_arr;
            delete shellSort_arr;
            delete countingSort_arr;
            delete bucketSort_arr;
            delete mergeSort_arr;
            delete radixSort_arr;
            delete gnomeSort_arr;
            delete mergeInsertionSort_arr;
    }
    
    cout<<"-------------------Para 15 dígitos:-------------------"<<endl;

        i=0;
        while (i<7){
            long long tam = size[i];
            long long n=tam;
            cout<<"----------Para "<<tam<<" datos----------"<<endl;
            long long* quickSort_arr= new long long[tam];
            long long* heapSort_arr= new long long[tam];
            long long* shellSort_arr= new long long[tam];
            long long* countingSort_arr= new long long[tam];
            long long* bucketSort_arr= new long long[tam];
            long long* mergeSort_arr= new long long[tam];
            long long* radixSort_arr= new long long[tam];
            long long* gnomeSort_arr= new long long[tam];
            long long* mergeInsertionSort_arr= new long long[tam];

            long long aleatorio;
            for (long long i = 0; i <  tam; i++) {
                aleatorio =100000000000000+rand()%(1000000000000000-100000000000000);
                *(quickSort_arr+i) = aleatorio;
                *(heapSort_arr+i) = aleatorio;
                *(shellSort_arr+i) = aleatorio;
                *(countingSort_arr+i) = aleatorio;
                *(bucketSort_arr+i) = aleatorio;
                *(mergeSort_arr+i) = aleatorio;
                *(radixSort_arr+i) = aleatorio;
                *(gnomeSort_arr+i) = aleatorio;
                *(mergeInsertionSort_arr+i) = aleatorio;
            }
            unsigned t0, t1;
            double time;


            t0 = clock();
            long long o=0;
            quickSort<long long>(quickSort_arr, o, n - 1);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Quick Sort: " << "Execution Time: " << time << endl;
            //printArray<long long>(quickSort_arr, n);

            t0 = clock();
            heapSort<long long>(heapSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Heap Sort: "<< "Execution Time: " << time << endl;
            // printArray<long long>(heapSort_arr, n);

            t0 = clock();
            shellSort<long long>(shellSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Shell Sort:"<< "Execution Time: " << time << endl;
            //printArray<long long>(shellSort_arr, n);

            t0 = clock();
            countingSort(countingSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Counting Sort:"<< "Execution Time: " << time << endl;
            //printArray(countingSort_arr, n);

            t0 = clock();
            bucketSort<long long>(bucketSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Bucket Sort: "<< "Execution Time: " << time << endl;
            //printArray<long long>(bucketSort_arr, n);

            t0 = clock();
            mergeSort<long long>(mergeSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Merge Sort:"<<"Execution Time: " << time << endl;
            // printArray<long long>(mergeSort_arr, n);

            t0 = clock();
            radixSort<long long>(radixSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Radix Sort:"<<"Execution Time: " << time << endl;
            // printArray<long long>(radixSort_arr, n);

            t0 = clock();
            gnomeSort<long long>(gnomeSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Gnome Sort: "<< "Execution Time: " << time << endl;
            //printArray<long long>(gnomeSort_arr, n);


            t0 = clock();
            mergeInsertionSort<long long>(mergeInsertionSort_arr, n);
            t1 = clock();
            time = (double(t1 - t0) / CLOCKS_PER_SEC);
            cout << "Merge-Insertion Sort: "<<"Execution Time: " << time << endl;
            //printArray<long long>(mergeInsertionSort_arr, n);

            delete quickSort_arr;
            delete heapSort_arr;
            delete shellSort_arr;
            delete countingSort_arr;
            delete bucketSort_arr;
            delete mergeSort_arr;
            delete radixSort_arr;
            delete gnomeSort_arr;
            delete mergeInsertionSort_arr;
    }
 
    return 0;
}