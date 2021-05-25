#include <iostream>
using namespace std;

template<class T>
int shellSort(T arr[], T n){

	for (T gap = n/2; gap > 0; gap /= 2){
		
		for (T i = gap; i < n; i += 1){
			
			T temp = arr[i];
			
			T j;	

			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
				arr[j] = arr[j - gap];
			}
				
			arr[j] = temp;
		}
	}
	return 0;
}


