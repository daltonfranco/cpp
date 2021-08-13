#include <iostream>
#include <math.h>

using namespace std;

int main(){

    short num1;
    int function;

    cout << "Enter a number: ";
    cin >> num1;

    function = (pow(num1, 2)) - (3*num1) + 5;

    cout << "In function: f(x) = x² - 3x + 5, with your number entered, the function it was left:  " << function << endl;

}