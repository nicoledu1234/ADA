#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
 
template<class T>
void bucketSort(T* data, T count) {
	T minValue = data[0];
	T maxValue = data[0];

	for (T i = 1; i < count; i++){
		if (data[i] > maxValue)
			maxValue = data[i];
		if (data[i] < minValue)
			minValue = data[i];
	}

	T bucketLength = maxValue - minValue + 1;
	vector<T>* bucket = new vector<T>[bucketLength];

	for (T i = 0; i < bucketLength; i++){
		bucket[i] = vector<T>();
	}

	for (T i = 0; i < count; i++){
		bucket[data[i] - minValue].push_back(data[i]);
	}

	T k = 0;
	for (T i = 0; i < bucketLength; i++){
		T bucketSize = bucket[i].size();

		if (bucketSize > 0)
		{
			for (T j = 0; j < bucketSize; j++)
			{
				data[k] = bucket[i][j];
				k++;
			}
		}
	}
}


/*
struct bucket
{
    int count;
    int* value;
};
 
int compareIntegers(const void* first, const void* second)
{
    int x = *((int*)first), y =  *((int*)second);
    if (x == y)
    {
        return 0;
    }
    else if (x < y)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
 
void bucketSort(int array[],int n)
{
    struct bucket buckets[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }
    
    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            buckets[0].value[buckets[0].count++] = array[i];
        }
        else if (array[i] > 10)
        {
            buckets[2].value[buckets[2].count++] = array[i];
        }
        else
        {
            buckets[1].value[buckets[1].count++] = array[i];
        }
    }
    for (k = 0, i = 0; i < 3; i++)
    {
        // now using quicksort to sort the elements of buckets
        qsort(buckets[i].value, buckets[i].count, sizeof(int), &compareIntegers);
        for (j = 0; j < buckets[i].count; j++)
        {
            array[k + j] = buckets[i].value[j];
        }
        k += buckets[i].count;
        free(buckets[i].value);
    }
}
*/