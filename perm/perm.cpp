#include <iostream>
#include <string>
using namespace std;

void buscarLenguaje(int n, string str = "") {
	if (str.size() >= n) {
		cout << str << endl;
		return;
	}
	buscarLenguaje(n, str + '0');
	buscarLenguaje(n, str + '1');
}

int main() {
	cout << "cuantos n?" << endl;
	int n;
	cin>> n;
	buscarLenguaje(3);
}