// COMSC-210 | Lab 5 | Loma Kim
/* In this lab I have taken the starter code provided by Professor Dietrich 
   and updated the code to use pointers instead of the int variables*/
#include <iostream>
using namespace std;

int swap(int *, int *);

int main() {
    int *xPtr = nullptr, *yPtr = nullptr;
    int x = 5, y = 10;
    xPtr = &x;
    yPtr = &y;

    cout << "x = " << *xPtr << "  | y = " << *yPtr << endl;

    cout << "Swapping...\n";
    int sum = swap(xPtr, yPtr);
    cout << "x = " << *xPtr << " | y = " << *yPtr << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a + *b;
}