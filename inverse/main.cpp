#include <bits/stdc++.h>
#include <ctime> 

using namespace std;
void swap(int *a,int*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void inverse( int n, int *ini, int*fin) {
    if (ini == fin) {
        return;
    }
    if (n<=1) {
        return;
    }
    swap(ini,fin);
    inverse(n-2, ini+1, fin-1);
}
void printArray(int *arr, int n){
    for (int *ptr= arr; ptr <arr+ n; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {50,75,66,33,1,22,4,98,57,68,32};
    printArray(arr, sizeof(arr) / sizeof(*arr));
    inverse( sizeof(arr) / sizeof(*arr),arr,arr+( sizeof(arr) / sizeof(*arr))-1);
    printArray(arr, sizeof(arr) / sizeof(*arr));

}