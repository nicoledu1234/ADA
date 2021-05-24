#include<iostream> 
#include<climits> 
using namespace std;

int maximumSubArray(int *arr, int n) {
        int sum = 0;
        int aux = 0;
        for(int *ptr = arr ; ptr < arr + n ; ptr++){
            aux = aux + *ptr;
            if(aux < 0){
                aux = 0;
            } 
            if(sum < aux){
                sum = aux;
            }
                
        }
        return sum;
}
void printArray(int *arr, int n){
    for (int *ptr= arr; ptr <arr+ n; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

int main(){
   int  A[] = {31,-41, 59, 26,-53, 58, 97,-93,-23, 84};
   int  B[] = {-4, 2, -5, 1, 2, 3, 6, -5, 1};
   cout<<"Para el arreglo: ";
   printArray(A,sizeof(A) / sizeof(*A));
   cout<< maximumSubArray(A,  sizeof(A) / sizeof(*A))<<endl;
   cout<<"Para el arreglo: ";
   printArray(B,sizeof(B) / sizeof(*B));
   cout<< maximumSubArray(B,  sizeof(B) / sizeof(*B))<<endl;
    return 0;
}