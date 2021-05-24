#include <iostream>
#include <vector>
using namespace std;

void Print(vector<int>& vec) {
  if (vec.size() != 1) {

    for (size_t i = 0; i < vec.size(); i++)
      cout << vec[i] << " ";

    cout << endl;
  }
}

void FindWays(vector<int>& way, int i, int n) {
  if (n == 0)
    Print(way);

  for (int j = n; j >= i; --j) {
    way.push_back(j);
    FindWays(way, j, n - j);
    way.pop_back();
  }
}

int main() {
  int n = 5;
  vector<int> way;

  FindWays(way, 1, n);

  return 0;
}
