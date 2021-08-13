#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int base, power, result;

    cout << "Enter your pow base: ";
    cin >> base;

    cout << "Enter your pow power: ";
    cin >> power;

    result = pow(base,power);

    cout << "The pow is equal to: " << result << endl;
}