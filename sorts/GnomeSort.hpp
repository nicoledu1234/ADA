// A C++ Program to implement Gnome Sort
#include <iostream>
using namespace std;

// A function to sort the algorithm using gnome sort
void gnomeSort(int arr[], int n)
{
	int index = 0;

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

