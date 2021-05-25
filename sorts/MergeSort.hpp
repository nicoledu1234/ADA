#include <bits/stdc++.h>
using namespace std;

template<class T>
void merge(T* izq, T nIzq, T* der, T nDer, T* A) {
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
void mergeSort(T* A, T n ) {
	if (n == 1) {
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

	mergeSort<T>(izq, mitad);
	mergeSort<T>(der, n - mitad);
	merge<T>(izq, mitad, der, n - mitad, A);

}