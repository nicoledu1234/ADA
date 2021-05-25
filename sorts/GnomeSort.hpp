#include <iostream>
using namespace std;

template<class T>
void gnomeSort(T arr[], T n){
	T index = 0;

	while (index < n) {
		if (index == 0)
			index++;
		if (arr[index] >= arr[index - 1])
			index++;
		else {
			swap(arr[index], arr[index - 1]);
			index--;
		}
	}
	return;
}

