#include <iostream>
using namespace std;

double square(double number) {
    return number * number;
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double result = square(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}
