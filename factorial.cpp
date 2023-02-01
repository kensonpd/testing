#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0) return 1;
    else return num * factorial(num - 1);
}

int main() {
    int n, i;
    double sum = 0.0;

    cout << "Enter an integer: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum += (double)factorial(i)/i;
    }

    cout << "Sum of factorials of first " << n << " natural numbers divided by their respective numbers is " << sum;
    return 0;
}