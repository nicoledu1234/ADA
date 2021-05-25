#include <iostream>
using namespace std;

template<class T>
T getMax(T array[], T size) {
   T max = array[0];
   for(T i = 1; i<size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; 
}

template<class T>
void countingSort(T arr[], T size){

	T max= getMax<T>(arr,size);
	T cifras=max+1;
	T count[cifras]={0};
	T output[cifras]={0};

	for(T i=0; i<=max;++i){
		count[i]=0;
	}
	for(T i=0; i< size;i++){
		count[arr[i]]++;
	}
	for(T i=1;i<=max;i++){
		count[i]+=count[i-1];
	}
	for(T i=size -1; i>=0; i--){
		output[count[arr[i]]-1]=arr[i];
		count[arr[i]]--;
	}
	for(T i=0;i<size;i++){
		arr[i]=output[i];
	}
	
}

