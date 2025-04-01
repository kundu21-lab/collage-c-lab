#include <stdio.h>
int main() {
    int num;
     << "Enter a number: ";
    cin >> num;

    long long factorial = 1;
    for (int i = 2; i <= num; i++)
        factorial *= i;

    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}

