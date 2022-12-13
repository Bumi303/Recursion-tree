#include <iostream>
#include <string>
#include "recursion.cpp"

using std::cout;
using std::cin;
using std::endl;

void pattern(int, int);

int main(){
	int n, col;

	cout << "Enter value for n: ";
	cin >> n;
	cout << endl;

	cout << "Enter value for col: ";
	cin >> col;
	cout << endl;

	pattern(n, col);

	cout << endl;
	return 0;
}
