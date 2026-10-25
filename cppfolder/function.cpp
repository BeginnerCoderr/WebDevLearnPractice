#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int a, b; 

    cout << "Enter first number: ";
    cin >> a; 

    cout << "Enter second number: ";
    cin >> b;

    int total = add(a, b);
    cout << "The sum is: " << total << endl;

    return 0;
}

int add(int a, int b) {
    int c = a + b; 
    return c;
}
