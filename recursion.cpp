#include <iostream>
#include <string>
  
using std::cout;
using std::cin;
using std::endl;

void pattern(int n, int col){
    if (n == -1)
        return; 

    pattern(n - 2, col + 1);
    for (int i = 0; i < col; i++) { cout << "  "; }
    for (int i = 0; i < n; i++) { cout << "* "; }
    cout << endl;

    pattern(n - 2, col + 1);
}
