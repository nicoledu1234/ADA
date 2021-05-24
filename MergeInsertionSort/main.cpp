#include <bits/stdc++.h>
#include <ctime> 

using namespace std;
 
 int mod(int t, int m) {
	int mo = -1;
	if (t < 0)
		return (t * mo >= m) ? (t - (t / m * m)) + m : t + m;
	return (t >= m) ? t - (t / m * m) : t;
}
void insertionSort(int *arr, int n){
    int key;

    for (int *i = arr + 1; i < arr + n; i++){
        key = *i; 
        int *j = i - 1;

        while (j >= arr && *j > key){
            *(j+1) = *j;
            j--;
        }

        *(j + 1) = key;
    }
}
 
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

void mergeInsertion(int* izq, int nIzq, int* der, int nDer, int* A) {
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

void mergeInsertionSort(int* A, int n, int max ) {
	if (n == 1) {
		return;
	}
    if (n <= max) {
		insertionSort(A,n);
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

	mergeInsertionSort(izq, mitad, max);
	mergeInsertionSort(der, n - mitad, max);
	mergeInsertion(izq, mitad, der, n - mitad, A);
    
}

void printArray(int *arr, int n){
    for (int *ptr= arr; ptr <arr+ n; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

int main(){
	bool code=1;
    while(code){
	cout<<"cuantos datos probamos?"<<endl;
	int tam ;
	cin>>tam;
	cout<<"Para "<< tam<<" datos:"<<endl;
	int* lista1 = new int[tam];
    int* lista2 = new int[tam];
    int* lista3 = new int[tam];

	int aleatorio;
    int* j = lista2;
    int* k = lista3;
	for (int* i = lista1 ; i < lista1 + tam; i++) {
		aleatorio = mod(rand(), (tam - 0 + 1) + 1);
		*i = aleatorio;
        *j = aleatorio;
        *k = aleatorio;
        k++; j++;
	}
	unsigned t0, t1;
	t0 = clock();
	insertionSort(lista1, tam);
	t1 = clock();
	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time Insertion Sort: " << time << endl;

	

	t0 = clock();
	mergeSort(lista2, tam);
	t1 = clock();
	time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time Merge Sort: " << time << endl;
    

	t0 = clock();
	mergeInsertionSort(lista3, tam,5);
	t1 = clock();
	time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time Merge Insertion Sort: " << time << endl;
    
	cout<<"deseas seguir probando?"<<endl;
	bool a;
	cin>>a;
	code=a;
	}
	
    return 0;
}