#include <iostream>
using namespace std;

int power(int num1, int num2) {
    int result = 1; 
    for (int i = 1; i <= num2; i++) {
        result *= num1;
    }
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter power: ";
    cin >> num2;

    cout << "Power of " << num1 << " raised to " << num2 << " is: " << power(num1, num2) << endl;

    return 0;
}
