#include <bits/stdc++.h>
using namespace std;

template<class T>
void insertionSort(T *arr, T n){
    T key;

    for (T *i = arr + 1; i < arr + n; i++){
        key = *i; 
        T *j = i - 1;

        while (j >= arr && *j > key){
            *(j+1) = *j;
            j--;
        }

        *(j + 1) = key;
    }
} 

template<class T>
void mergeInsertion(T* izq, T nIzq, T* der, T nDer, T* A) {
	T* k = A;
	T* i = izq;
	T* j = der;

	while ((i < izq + nIzq) && (j < der + nDer)) {
		if (*i<=*j) {
			*k = *i;
			i++;
		}
		else {
			*k = *j;
			j++;
		}
		k++;
	}

	while (i < izq + nIzq) {
		*k = *i;
		i++; k++;
	}

	while (j < der + nDer) {
		*k = *j;
		j++; k++;
	}
}

template<class T>
void mergeInsertionSort(T* A, T n ) {
	T max = n /3;
	if (n == 1) {
		return;
	}
    if (n <= max) {
		insertionSort<T>(A,n);
        return;
	}

	T mitad = n / 2;
	T* izq = new T[mitad];
	T* der = new T[n - mitad];
	T* k = A;

	for (T* i = izq; i < izq + mitad; i++) {
		*i = *k;
		k++;
	}

	T* r = A + mitad;

	for (T* j = der; j < der + (n - mitad); j++) {
		*j = *r;
		r++;
	}

	mergeInsertionSort<T>(izq, mitad);
	mergeInsertionSort<T>(der, n - mitad);
	mergeInsertion<T>(izq, mitad, der, n - mitad, A);
    
}