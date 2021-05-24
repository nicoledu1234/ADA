#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& vec) {
  if (vec.size() != 1) {
    for (size_t i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    cout << endl;
  }
}

void descomponer(vector<int>& vec, int i, int n) {
  if (n == 0){
      print(vec);
  }

  for (int j = n; j >= i; --j) {
    vec.push_back(j);
    descomponer(vec, j, n - j);
    vec.pop_back();
  }
}

int main() {
  int n = 5;
  vector<int> vec;
  cout<<n<<endl;
  descomponer(vec, 1, n);

  int n1 = 7;
  vector<int> vec1;
  cout<<n1<<endl;
  descomponer(vec1, 1, n1);


  return 0;
}