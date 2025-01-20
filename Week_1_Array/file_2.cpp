//Functions
#include <iostream>
using namespace std;

// Factorial Function
int fact(int num) {
    if (num == 0 || num == 1) {
        return 1; // Base case
    }
    return num * fact(num - 1); // Recursive case
}

int main() {
    int num1 = fact(5);
    cout << "Factorial of 5 is: " << num1 << endl;
    return 0;
}
