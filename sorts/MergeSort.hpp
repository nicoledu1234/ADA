#include <bits/stdc++.h>
using namespace std;

void merge(int* izq, int nIzq, int* der, int nDer, int* A) {
	int* k = A;
	int* i = izq;
	int* j = der;

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

void mergeSort(int* A, int n ) {
	if (n == 1) {
		return;
	}

	int mitad = n / 2;
	int* izq = new int[mitad];
	int* der = new int[n - mitad];
	int* k = A;

	for (int* i = izq; i < izq + mitad; i++) {
		*i = *k;
		k++;
	}

	int* r = A + mitad;

	for (int* j = der; j < der + (n - mitad); j++) {
		*j = *r;
		r++;
	}

	mergeSort(izq, mitad);
	mergeSort(der, n - mitad);
	merge(izq, mitad, der, n - mitad, A);

}